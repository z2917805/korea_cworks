#include <stdio.h>
#include <stdlib.h>

int main_MallocChar2() {
	int num = 10;

	int* ptr1;
	int* ptr2;

	//���� �Ҵ� 1�� ���� - 4Byte *1=4Byte
	ptr1 = &num; //���� �Ҵ�
	ptr2 =(int*) malloc(sizeof(int)*2); 

	if (ptr2 == NULL) {

		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}
	ptr2[0] = 11;
	ptr2[1] = 12;


	printf("%d %x\n", *ptr1, ptr1);
	printf("%d %x\n", *(ptr2+0), ptr2+0);
	printf("%d %x\n", *(ptr2+1), ptr2+1);

	free(ptr2); //�޸� ����

	return 0;
}