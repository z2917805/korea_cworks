#include <stdio.h>

int main_Function1()
{
	int year = 2025;   //������ ����
	char place = 'B';  //�� ���� ����

	//���ڿ�(�迭) ����, ����-1��, �ѱ�-2��
	//{'J', 'e', 'r', 'r', 'y', '\0'} '\0'- NULL����(���鹮��)
	char name[] = "Jerry";  

	printf("%d�� �Դϴ�.\n", year);
	printf("%c�������Դϴ�.\n", place);
	printf("�� �̸��� %s�Դϴ�.\n", name);
	printf("�Լ��� �н��մϴ�.\n");

	//sizeof() �Լ� - ������ ũ��(����)
	printf("�迭�� ũ��: %d\n", sizeof(name));

	return 0;
}