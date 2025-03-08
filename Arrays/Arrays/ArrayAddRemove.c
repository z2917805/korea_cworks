//#include <stdio.h>
//
//int main_ArrayAddRemove()
//{
//	//정수형 배열 선언  - 크기(5)
//	int arr[5];
//
//	arr[0] = 10;
//	arr[1] = 20;
//	arr[2] = 30;
//	arr[3] = 40;
//	arr[4] = 50;
//
//	for (int i = 0; i < 5; i++) {
//		printf("%-3d\n", arr[i]);
//	}
//	printf("\n===============================\n");
//
//	//요소 삭제
//	arr[2] = 0;
//
//	//arr[2]삭제
//	for (int i = 0; i < 4; i++) {
//		arr[i] = arr[i + 1];
//	}
//	//출력
//	for (int i = 0; i < 4; i++) {
//		printf("%-3d", arr[i]);
//	}
//
//
//
//
//	return 0;
//}