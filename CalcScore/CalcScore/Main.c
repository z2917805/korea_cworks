
#include <stdio.h>

typedef struct
{
	int math;
	int eng;
	double avg;
}Score;

typedef struct {
	int number;
	char name[20];
	Score score; //���� ����ü ����(����)

}Student;

void showStudentInfo(Student); //�л� ���� �Լ� �����

int main() {
	Student s[3]; //�л� ����ü ���� 3�� ����
	int total[2] = { 0, 0 }; //����, ���� ���� ������ �迭
	double avg[2] = { 0.0,0.0 };
	printf("\n=====���� ���� ���α׷�=====\n");

	for(int i = 0; i < 3; i++) 
		{
			printf("�й��Է�: ");
			scanf_s("%d", &s[i].number);

			printf("�̸��Է�: ");
			scanf_s("%s", s[i].name, sizeof(s[i].name));

			printf("��������: ");
			scanf_s("%d", &s[i].score.math);

			printf("��������: ");
			scanf_s("%d", &s[i].score.eng);

		}

	//���� �� ��� ���

	for (int i = 0; i < 3; i++) {
		total[0] = total[0] + s[i].score.math; //������ ����
		total[1] = total[1] + s[i].score.eng; //������ ����
	}
	avg[0] = (double)total[0] / 3; //������ ���
	avg[1] = (double)total[1] / 3; //������ ���
	printf("==============�л��������==============\n");
	for (int i = 0; i < 3; i++)
	{
		
		showStudentInfo(s[i]); //�л����� �Լ� ȣ��
	}
	printf("���� ����: %d, ���� ����: %d\n",total[0],total[1]);
	printf("���� ���: %.1f, ���� ���: %.1f\n",avg[0],avg[1]);
	//exe ���� ����(���� â�� ������ �ʵ��� ��)
	system("pause");

	return 0;
}

//�л� ���� �Լ� ����
void showStudentInfo(Student st) {
	
	printf("�й��Է�: %d, �̸�: %s,��������: %d, ��������: %d\n", st.number, st.name, st.score.math, st.score.eng);

}