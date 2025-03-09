#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char* words[] = { "ant","bat","bear","cat","deer","fox","horse","monkey","tiger","zebra" };
	char *question; //문제
	char answer[20]; //사용자 입력
	int n = 1; // 문제 번호

	clock_t start, end; // 시작시간, 종료시간
	double elapsed; //소용시간
	int size,idx; // 배열의 크기

	srand(time(NULL));

	printf("영어 타자 게임, 준비되면 엔터>");
	getchar();

	start = clock(); //시작시간

	while (n <= 10) {
		printf("\n문제 %d",n);
		size = sizeof (words) / sizeof (words[0]);
		idx = rand() % size;
		question = words[idx];
		printf("%s\n",question);
		scanf_s("%s", answer, sizeof(answer));

		if (strcmp(question, answer) == 0) {  //일치하면
			printf("통과!\n");
			n++; //다음문제
		}
		else {
			printf("오타! 다시도전!");
		}
	}
	//CLOCKS_PER_SEC : 상수 ms(마이크로초)를 s(ㅊ)로 표시해줌
	end = clock();
	elapsed = (double)(end - start) / CLOCKS_PER_SEC;
		printf("게임 소요 기간: %.2lf초\n", elapsed);


	return 0;
}