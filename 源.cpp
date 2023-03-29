#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess == ret)
		{
			Sleep(500);
			printf("恭喜你！猜对了");
			Sleep(1000);
			break;
		}
	}
}
void menu()
{
	char arr1[] = "******************************\n";
	char arr2[] = "******************************\n";
	char arr3[] = "******************************\n";
	char arr4[] = "******************************\n";
	char arr5[] = "********** 1.开始游戏  *******\n";
	char arr6[] = "********** 0.退出游戏  *******\n";
	int left = 0;
	int right = strlen(arr2) - 1;
	while (left <= right)
	{
		arr2[left] = arr5[left];
		arr2[right] = arr5[right];
		arr3[left] = arr6[left];
		arr3[right] = arr6[right];
		printf("%s\n", arr1);
		printf("%s\n", arr2);
		printf("%s\n", arr3);
		printf("%s\n", arr4);
		Sleep(150);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%s\n", arr4);

}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请猜一个1-100的数\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入");
			Sleep(1000);
		}
	} while (input);
	return 0;
}