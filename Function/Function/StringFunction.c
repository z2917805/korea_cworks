#define _CRT_SECURE_NO_WARNINGS  //strcpy() ���� ����
#include <stdio.h>
#include <string.h> //strlen() �Լ�

int main_StringFunction()
{
	//���ڿ��� ����(����)
	char msg1[] = "Good Luck";
	char msg2[20];

	int len = strlen(msg1);
	printf("���ڿ��� ����: %d\n", len);

	//���ڿ��� ���� - strcpy(������ ���ڿ�, ���� ���ڿ�)
	printf("%s\n", strcpy(msg2, msg1));

	//���ڿ��� �� - strcmp(���ڿ�1, ���ڿ�2)
	//��ġ�ϸ� - 0, ����ġ - 1�� ��ȯ
	char greet1[] = "hello";
	char greet2[20];

	printf("���ڿ��� �Է��ϼ���:");
	scanf_s("%s", greet2, sizeof(greet2));

	if (strcmp(greet1, greet2) == 0)
	{
		printf("���ڿ��� ��ġ�մϴ�.\n");
	}
	else
	{
		printf("���ڿ��� ��ġ���� �ʽ��ϴ�.\n");
	}

	printf("���: %d\n", strcmp(greet1, greet2));


	return 0;
}