#include <stdio.h>

//���� ���� ���� �ֱ�(Scope)
//���(�Լ�, ���)�ȿ��� �ʱ�ȭ�ɶ� �����ǰ�
//����� ����� �Ҹ�(����)�Ѵ�.
int sum10();
int main_LocalVar()
{
	int value = sum10();  //ù��° ȣ��

	printf("value = %d\n", value);

	value = sum10();  //�ι�° ȣ��
	printf("value = %d\n", value);
	//printf("x = %d\n", x);

	return 0;
}

int sum10()
{
	int x = 1;   //��������
	x = x + 10;

	return x;
}