#include <stdio.h>

//�� ���� ����ϴ� �Լ�
int add(int, int);  //�Լ� �����
int sub(int, int);
int main_Function2()
{

	int result1, result2;
	int a = 10, b = 20;

	result1 = add(a, b);  //���ϱ�
	result2 = sub(a, b);  //����

	//���
	printf("���� ���: %d\n", result1);
	printf("�� ���: %d\n", result2);

	return 0;
}

//�Լ� ����
int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}