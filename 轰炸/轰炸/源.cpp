#include <stdio.h>
#include <Windows.h>
int main()
{
	int i;
	char name[100];
	printf("输入你要轰炸的对象：");
	scanf_s("%s", &name, 40);
	printf("输入你要轰炸的次数："); 
	scanf_s("%d", &i);
	HWND H = FindWindow(0, name);
	while (i-- > 0)
	{
		SendMessage(H, WM_PASTE, 0, 0);
		SendMessage(H, WM_KEYDOWN, VK_RETURN, 0);
	}
}