
#include <stdio.h>

int main_FileRead2() {
	//아스키(코드값)파일 읽기
	FILE* fp;
	int ch;
	char buffer[256]; //읽은 데이터를 저장할 배열
	fopen_s(&fp, "ascii.txt", "r"); //fopem_s를 사용하면 =/= #define _CRT_SECURE_NO_WARNINGS 

	if (fp == NULL) {
		printf("파일 열기에 실패함\n");
		return -1;
	}

	//파일읽기 -fgetc()사용
	
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
	//exe 파일 닫히지 않도록 함
	system("pause");
	return 0;
}