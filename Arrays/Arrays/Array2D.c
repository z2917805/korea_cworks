#include <stdio.h>

int main_Array2D() {
	//정수형 이차원 배열 선언
	int a[2][2]; //단어 2개 
	int i, j;
	//값 저장

	a[0][0] = 1;
	a[0][1] = 2;
	a[1][0] = 3;
	a[1][1] = 4;

	printf("a[0][0] =%d\n",a[0][0]);
	printf("a[1][1] =%d\n",a[1][1]);
	printf("\n======================================\n");
	

	/*for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("a[%d][%d] =%d\n",i,j,a[i][j]);
			
		}
	}*/

	//2차원 배열 선언과 함께 초기화

	int arr[3][2] = { {75, 80},{85, 95},{90, 100} };

	int sum = 0; //총점
	double average = 0.0; //평균
	int count = 0; //개수


	//출력 100

	//printf("arr[2][1]=%d\n",arr[2][1]);

	//전체 출력

	for (i = 0; i < 3;i++) {
		for (j = 0; j < 2;j++) {
			printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
		}
	}	
	printf("\n======================================\n");
	
	for (i = 0; i < 3;i++) {
		for (j = 0; j < 2;j++) {
			sum += arr[i][j];
			count++;
		}
	}
	printf("%d\n",sum);
	
	average = (double)sum / count;
		printf("평균:%.1lf\n",average);



	return 0;
}