#define _CRT_SECURE_NO_WARNINGS //fopen()��������
#include <stdio.h>

int main_FileWrite2() {
	//�ƽ�Ű(�ڵ尪)���� ����

	FILE* fp;
	fp = fopen("ascii.txt", "w");
	if (fp == NULL) {

		printf("���� ���⿡ ������\n");
		return -1;
	}

	//���Ͼ���
	for (int i = 32; i < 128; i++) {

		if (i % 10 == 0)
			fputc('\n', fp);
		fputc(i, fp); //�� ���� ����
		fputc('\t', fp);
	}

	fclose(fp);

	return 0;
}