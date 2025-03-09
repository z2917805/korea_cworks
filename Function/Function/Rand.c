#include <stdio.h>
#include <stdlib.h> //srand(),rand() 정의
#include <time.h> //time() 정의

int main_Rand() {
	int rndVal; //핸덤수를 저장할 변수 선언
	int coin, dice; //동전, 주사위


	//rand -난수(무작위 수)
	//srand(11); //seed값 설정

	srand(time(NULL));

	//rndVal = rand(); //rand() 호출
	//printf("%d\n",rndVal);

	//동전
	coin = rand() % 2; //나머지 0, 1
	printf("동전: %d\n",coin);

	if (coin == 0) {
		printf("앞면\n");
	}
	else {
		printf("뒷면\n");
	}

	//주사위 눈
	printf("\n============================\n");

	dice = rand() % 6 + 1; //나머지 = 0~5 주사위 1~6 따리서 +1
	printf("주사위: %d\n",dice);

	printf("\n============================\n");
	//주사위 10번 던지기
	for (int i = 0; i <= 10;i++) {
		dice = rand() % 6 + 1; //나머지 = 0~5 주사위 1~6 따리서 +1
		printf("주사위: %d\n", dice);
	}

	//사계절 랜덤 출력

	char season[][5] = { "봄","여름","가을","겨울" };
	int rndIdx = 0;

	int size = sizeof(season) / sizeof(season[0]);
	printf("%d %d\n", sizeof(season), sizeof(season[0]));
	printf("%d\n", size);

	rndIdx = rand() % 4; //0~3 0 =봄 3=겨울
	printf("계절: %s\n", season[rndIdx]);

	//사계절을 포인터로 선언
	char *season2[] = { "봄","여름","가을","겨울" };
	printf("계절: %s\n", season2[rndIdx]);
	
	return 0;
}