#include <stdio.h>
#include <Windows.h>
int main()
{
	int i;
	char name[100];
	printf("������Ҫ��ը�Ķ���");
	scanf_s("%s", &name, 40);
	printf("������Ҫ��ը�Ĵ�����"); 
	scanf_s("%d", &i);
	HWND H = FindWindow(0, name);
	while (i-- > 0)
	{
		SendMessage(H, WM_PASTE, 0, 0);
		SendMessage(H, WM_KEYDOWN, VK_RETURN, 0);
	}
}