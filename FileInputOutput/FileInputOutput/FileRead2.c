
#include <stdio.h>

int main_FileRead2() {
	//�ƽ�Ű(�ڵ尪)���� �б�
	FILE* fp;
	int ch;
	char buffer[256]; //���� �����͸� ������ �迭
	fopen_s(&fp, "ascii.txt", "r"); //fopem_s�� ����ϸ� =/= #define _CRT_SECURE_NO_WARNINGS 

	if (fp == NULL) {
		printf("���� ���⿡ ������\n");
		return -1;
	}

	//�����б� -fgetc()���
	
	/*while (1) {

		ch = fgetc(fp);
		if (ch == EOF)
			break;
		printf("%c", ch);
	}
	while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}
	fclose(fp);*/

	//fgets()
	while (fgets(buffer, sizeof(buffer), fp) != NULL) {
		printf("%s", buffer);
	}
	//exe ���� ������ �ʵ��� ��
	system("pause");
	return 0;
}