#include <stdio.h>
#define MAX_LEN 4 //최대 사용할 수 있는 상수로 제안하는것

int main_ArrayAddRemove2() {

	//정수형 배열 생성
	int carts[MAX_LEN];
	int idxOfCarts=0;

	//요소 저장
	
	carts[idxOfCarts++] = 80; //=carts[1]
	carts[idxOfCarts++] = 70; //=carts[1]
	carts[idxOfCarts++] = 95; //=carts[1]
	carts[idxOfCarts++] = 90; //=carts[1]

	//요소 삭제
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];

	if (idxOfCarts < 0) {
		printf("더이상삭제못함\n");
	}
	for (int i = 0; i < idxOfCarts; i++) {
		printf("%3d\n", carts[i]);
	}
	
	//반복문으로 입력 받기
	while (1) //True -1,False - 0
	{
		printf("점수입력: ");
		scanf_s("%d", &carts[idxOfCarts++]);
		 
		if (idxOfCarts >= MAX_LEN) {
			puts("더 이상 추가할 수 없음"); //puts는 문자로만 나오게 하고싶을 때 printf와 동일
			return; //즉시종료
		}
	}
	//전체 출력
	for (int i = 0; i < idxOfCarts; i++) {
		printf("%3d\n", carts[i]);
	}

	return 0;
}