
#include <stdio.h>
//���� �б�
int main() {
	//���� �ܾ� �����ϱ�
	FILE* fp;
	int ch;
	char buffer[256]; //�ܤ����� ������ �迭
	fopen_s(&fp, "words.txt", "r");
	if (fp == NULL) {

		printf("���� ���⿡ ������\n");
		return -1;
	}

	//fgets()�� �б�
	while (fgets(buffer, sizeof(buffer), fp) != NULL) {
		printf("%s", buffer);
	}
	
	system("pause");
	

	fclose(fp);

	return 0;
}