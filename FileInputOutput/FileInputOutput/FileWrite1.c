#define _CRT_SECURE_NO_WARNINGS //fopen()��������
#include <stdio.h>

//���� ����(���� ����)
int main_FileWrite1() {
	//���� ����ü ������ ����
	FILE* fp;

	//fopen(����, ���) : ���� ��� -w,�б��� -r
	fp = fopen("out.txt", "w"); //���� ����
	if (fp == NULL) {
		printf("���� ���⿡ ������\n");
		return 1; // 0�̸� ����, 1�Ǵ�-1�̸� ����
	}

	//���� ����
	//�� ���� ����
	fputc('H', fp);
	fputc('e', fp);
	fputc('l', fp);
	fputc('l', fp);
	fputc('o', fp);

	//���ڿ� ����
	fputs("\nApple\n", fp);
	fputs("���\n", fp);

	fclose(fp); //���� �ݱ�

	return 0;
}