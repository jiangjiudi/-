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
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess == ret)
		{
			Sleep(500);
			printf("��ϲ�㣡�¶���");
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
	char arr5[] = "********** 1.��ʼ��Ϸ  *******\n";
	char arr6[] = "********** 0.�˳���Ϸ  *******\n";
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
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("���һ��1-100����\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������");
			Sleep(1000);
		}
	} while (input);
	return 0;
}