#include <stdio.h>
#include <stdlib.h>

int main_MallocChar() {

	//���ĺ� �빮�ڸ� ������ ������ �迭 ���� 
	char* pc;
	pc = (char*)malloc(sizeof(char) * 26); // 1Byte * 26 =26B

	if (pc == NULL) {

		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}

	*pc = 'A';
	*(pc + 1) = 'B';

	/*printf("%c\n", *pc);
	printf("%c\n", *(pc+1));*/

	for (int i = 0; i < 26; i++) {

		*(pc + i) = 'A' + i;
	}

	for (int i = 0; i < 26; i++) {

		printf("%2c\n", *(pc + i));
	}

	free(pc);

	return 0;
}