#include <stdio.h>

int main_ArrayInt()
{
	//���� ���� ����
	/*int kor1 = 80;
	int kor2 = 75;
	int kor3 = 90;*/

	//�迭
	int kor[] = { 80, 75, 90, 70 };
	int sum = 0;
	double avg = 0.0;  // ��� = �հ� / ����

	//���� ��ȸ(����)
	/*printf("kor[0]=%d\n", kor[0]);
	printf("kor[1]=%d\n", kor[1]);
	printf("kor[2]=%d\n", kor[2]);*/

	//����(������Ʈ)
	kor[1] = 85;

	//��ü ��ȸ
	for (int i = 0; i < 4; i++)
	{
		printf("kor[%d] = %d\n", i, kor[i]);
	}

	//�հ�
	//int sum = kor[0] + kor[1] + kor[2] + kor[3];
	
	for (int i = 0; i < 4; i++)
	{
		sum += kor[i];  //sum = sum + kor[i];
		printf("kor[%d] = %d, sum = %d\n", i, kor[i], sum);
	}
	printf("�հ�=%d\n", sum);

	//���
	avg = (double)sum / 4;    //������ -> �Ǽ� ����ȯ
	printf("���=%.2lf\n", avg);


	return 0;
}