#include <stdio.h>
//int *a = arr 
void changeArray(int *a) // int a[] (매개변수가 배열)
{
	a[1] = 50;
}


int main_changeArray() {
	int arr[] = { 10, 20, 30 };

	//arr[1] = 50; // 20 => 50으로 수정
	
	changeArray(arr); //함수 호출

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr[i]);
	}


	return 0;
}