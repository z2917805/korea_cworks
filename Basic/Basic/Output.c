#include <stdio.h>

int main_Output()
{

	int number = 11;
	char place = 'B';  //���� 1�� - Ȭ����ǥ
	char name[] = "����"; //���� ������ - ���ڿ�
	float weight = 60.3f;  //�Ǽ� - ���� 'f'�� ����
	double height = 171.5;  //�Ǽ�

	//�ڷ����� ũ�� - sizeof(�ڷ���)
	printf("%d, %dByte\n", number, sizeof(number));
	printf("%c ������, %dByte\n", place, sizeof(place));
	printf("�� �̸��� %s�Դϴ�. %dByte\n", 
				name, sizeof(name));
	printf("�����Դ� %.2f kg�Դϴ�. %dByte\n", 
				weight, sizeof(weight));
	printf("Ű�� %.2lf cm�Դϴ�. %dByte\n",
		height, sizeof(height));

	return 0;
}