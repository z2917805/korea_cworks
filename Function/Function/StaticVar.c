#include <stdio.h>

//�������� - static
//����� �Լ��� ����Ǿ �� ���� ��� �����ϴ� ����
//���α׷��� ����ɶ� �Ҹ���
void call();
int main_StaticVar()
{
	call();
	call();
	call();

	return 0;
}

//void -  ��ȯ �ڷ����� ����
void call()
{
	static int x = 0;  //���� ����

	x += 1;  //x = x + 1

	printf("���� ȣ����  %d��°�Դϴ�.\n", x);
}