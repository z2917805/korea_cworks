#include <stdio.h>

int main_stringetchar() {
	//getchar() - ���� 1�� �Է�

	//����(buffer) - �ӽñ�����

	/*char c1, c2;*/

	//printf("�Է��ϼ���:");
	//c1 = getchar(); //�Է� ex 'a'�Է¹���(���ۿ��� '\n'�� ���� ����)
	//while (getchar() != '\n'); //'\n'�� ��������
	//c2 = getchar(); 

	//printf("%c %c\n",c1,c2); //��� 

	char name[20];
	int age;

	printf("�̸� �Է�:");
	//scanf_s("%s", name, sizeof(name));
	fgets(name, sizeof(name), stdin);

	while (getchar() != '\n');

	printf("���� �Է�:");
	scanf_s("%d",&age);

	printf("�̸�: %s, ����: %d", name, age);

	return 0;
}