#include <stdio.h>

int main_Array2()
{
	//��Ұ� 5���� ������ �迭  score ����
	int score[] = { 86, 70, 90, 70, 85 };
	int n;  //�ݺ� ����
	int total = 0;  //�հ� ����: 0���� ����
	double avg = 0.0; //��� ����

	//Ư�� ��ҿ� ����(��ȸ)
	printf("score[1] = %d\n", score[1]);
	printf("score[4] = %d\n", score[4]);

	//��� ����
	score[2] = 95;
	printf("score[2] = %d\n", score[2]);

	//��ü ��ȸ(�˻�)
	for (n = 0; n < 5; n++)
	{
		printf("%d\n", score[n]);
	}

	//����� �հ�
	printf("%d\n", score[0] + score[1]);

	for (n = 0; n < 5; n++)
	{
		total += score[n]; //total = total + score[n];
	}
	//����� ��� = �հ� / ����
	// ����� ������(int)�̹Ƿ� double�� ���� ����ȯ�ؾ� �� 
	//avg = total / 5.0;
	avg = (double)total / 5;  

	printf("�հ�: %d\n", total);
	printf("���: %.1lf\n", avg);
	return 0;
}