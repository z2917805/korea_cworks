#include <stdio.h>
//int *a = arr 
void changeArray(int *a) // int a[] (�Ű������� �迭)
{
	a[1] = 50;
}


int main_changeArray() {
	int arr[] = { 10, 20, 30 };

	//arr[1] = 50; // 20 => 50���� ����
	
	changeArray(arr); //�Լ� ȣ��

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr[i]);
	}


	return 0;
}