#define _CRT_SECURE_NO_WARNINGS //fopen()오류방지
#include <stdio.h>

//파일 쓰기(파일 저장)
int main_FileWrite1() {
	//파일 구조체 포인터 생성
	FILE* fp;

	//fopen(파일, 모드) : 쓰기 모드 -w,읽기모드 -r
	fp = fopen("out.txt", "w"); //파일 열기
	if (fp == NULL) {
		printf("파일 열기에 실패함\n");
		return 1; // 0이면 정상, 1또는-1이면 오류
	}

	//파일 쓰기
	//한 문자 쓰기
	fputc('H', fp);
	fputc('e', fp);
	fputc('l', fp);
	fputc('l', fp);
	fputc('o', fp);

	//문자열 쓰기
	fputs("\nApple\n", fp);
	fputs("사과\n", fp);

	fclose(fp); //파일 닫기

	return 0;
}