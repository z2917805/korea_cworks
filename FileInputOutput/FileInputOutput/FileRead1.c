#define _CRT_SECURE_NO_WARNINGS //fopen()��������
#include <stdio.h>

int main_FileRead1(){

	//���� ������ ���� ����
	FILE* fp;
	int ch; 
	fp = fopen("out.txt", "r"); //r-�б� ���
	if (fp == NULL) {
		printf("���� ���⿡ ������\n");
		return -1;
	}

	//���� �б�

	//ch = fgetc(fp);

	////�ѱ��� �б�

	//printf("%c", ch); 
	//������ �б�
	while (1) {
		ch = fgetc(fp);
		if(ch == EOF){
		//EOP= End of File
			break;

		}
		printf("%c", ch);
	}
	fclose(fp);//���� �ݱ�


	return 0;
}