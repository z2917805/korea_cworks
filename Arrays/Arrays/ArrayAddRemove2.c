#include <stdio.h>
#define MAX_LEN 4 //�ִ� ����� �� �ִ� ����� �����ϴ°�

int main_ArrayAddRemove2() {

	//������ �迭 ����
	int carts[MAX_LEN];
	int idxOfCarts=0;

	//��� ����
	
	carts[idxOfCarts++] = 80; //=carts[1]
	carts[idxOfCarts++] = 70; //=carts[1]
	carts[idxOfCarts++] = 95; //=carts[1]
	carts[idxOfCarts++] = 90; //=carts[1]

	//��� ����
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];

	if (idxOfCarts < 0) {
		printf("���̻��������\n");
	}
	for (int i = 0; i < idxOfCarts; i++) {
		printf("%3d\n", carts[i]);
	}
	
	//�ݺ������� �Է� �ޱ�
	while (1) //True -1,False - 0
	{
		printf("�����Է�: ");
		scanf_s("%d", &carts[idxOfCarts++]);
		 
		if (idxOfCarts >= MAX_LEN) {
			puts("�� �̻� �߰��� �� ����"); //puts�� ���ڷθ� ������ �ϰ���� �� printf�� ����
			return; //�������
		}
	}
	//��ü ���
	for (int i = 0; i < idxOfCarts; i++) {
		printf("%3d\n", carts[i]);
	}

	return 0;
}