#include <stdio.h>
#include <stdlib.h> //srand(),rand() ����
#include <time.h> //time() ����

int main_Rand() {
	int rndVal; //�ڴ����� ������ ���� ����
	int coin, dice; //����, �ֻ���


	//rand -����(������ ��)
	//srand(11); //seed�� ����

	srand(time(NULL));

	//rndVal = rand(); //rand() ȣ��
	//printf("%d\n",rndVal);

	//����
	coin = rand() % 2; //������ 0, 1
	printf("����: %d\n",coin);

	if (coin == 0) {
		printf("�ո�\n");
	}
	else {
		printf("�޸�\n");
	}

	//�ֻ��� ��
	printf("\n============================\n");

	dice = rand() % 6 + 1; //������ = 0~5 �ֻ��� 1~6 ������ +1
	printf("�ֻ���: %d\n",dice);

	printf("\n============================\n");
	//�ֻ��� 10�� ������
	for (int i = 0; i <= 10;i++) {
		dice = rand() % 6 + 1; //������ = 0~5 �ֻ��� 1~6 ������ +1
		printf("�ֻ���: %d\n", dice);
	}

	//����� ���� ���

	char season[][5] = { "��","����","����","�ܿ�" };
	int rndIdx = 0;

	int size = sizeof(season) / sizeof(season[0]);
	printf("%d %d\n", sizeof(season), sizeof(season[0]));
	printf("%d\n", size);

	rndIdx = rand() % 4; //0~3 0 =�� 3=�ܿ�
	printf("����: %s\n", season[rndIdx]);

	//������� �����ͷ� ����
	char *season2[] = { "��","����","����","�ܿ�" };
	printf("����: %s\n", season2[rndIdx]);
	
	return 0;
}