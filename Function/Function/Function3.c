#include <stdio.h>
#include <math.h>  //abs() ����

//���밪�� ���ϴ� �Լ� ����
int myAbs(int x)
{
	if (x < 0) 
	{
		return -x;
	}
	else
	{
		return x;
	}
}

int main_Function3()
{
	int value1, value2, value3;

	value1 = abs(-3);  //���� �Լ� ȣ��
	value2 = abs(+3);

	value3 = myAbs(-3); //����� ���� �Լ� ȣ��

	printf("���� �Լ��� ���밪: %d\n", value1);
	printf("���� �Լ��� ���밪: %d\n", value2);
	printf("���� ���� �Լ��� ���밪: %d\n", value3);

	return 0;
}