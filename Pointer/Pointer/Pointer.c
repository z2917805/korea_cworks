#include <stdio.h>

int main_Pointer() {
	//������ ����

	int n = 3;

	//������ ������ ���� - ������ �޸� ����(�ּ�)�� ����

	int* pn;

	pn = &n; //���� n�ּҸ� ������

	printf("������ ��:%d\n", n);
	printf("������ �޸� ����:%x\n",&n);

	printf("������ (����)�� ��:%x\n", pn);
	printf("������ (����)�� �޸� ����:%x\n", &pn);
	printf("������ (����)�� ����Ű�� ������ ��:%d\n", *pn);

	//�ڷ����� ũ��
	printf("������ �ڷ��� ũ��: %dByte\n",sizeof(n));
	printf("�������� �ڷ��� ũ��: %dByte\n",sizeof(pn));

	//������ ����
	char c;
	char* pc;

	c = 'A';
	pc = &c; //���� c�� �ּҸ� ����

	printf("������ ��:%c\n", c);
	printf("������ �ּ�:%x\n", &c);
	printf("������ ������ ��:%x\n", pc);
	printf("������ ������ �޸𸮹���:%x\n", &pc);
	printf("������ ������ ����Ű�� ��:%d\n", *pc);


	return 0;
}