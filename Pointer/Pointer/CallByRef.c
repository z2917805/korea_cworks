#include <stdio.h>

void CallByValue(int);

int main() {
	int num = 10;
	//num++;
	CallByValue(num); // 1�� ���ϴ� �Լ�
	
	printf("main �Լ� �� �� ������ : % d\n", num);
	

	return 0;
}

void CallByValue(int *n) {
	n++;
	printf("�Լ� �� �� ������:%d\n",n);
}