#define _CRT_SECURE_NO_WARNINGS //strcpy()
#include <stdio.h>
#include <string.h>

//���� ����ü
typedef struct {
	int math;
	int eng;
	double avg;

}Score;

typedef struct {
	int number;
	char name[20];
	Score score;

}Student;

//�л����� ����Լ�
void showStudentsInfo(Student st) //����ü �Ű�����
{
	printf("�й�: %d, �̸�: %s, ����: %d, ����: %d, ���: %.1lf\n",st.number,st.name,st.score.math,st.score.eng, st.score.avg);
}

int main_ScoreStudents() {
	//����ü ���� ����
	Student s1;
	s1.number = 101;
	strcpy(s1.name, "���̽�");
	s1.score.math = 95;
	s1.score.eng = 80;

	//���
	s1.score.avg = (double)(s1.score.math + s1.score.eng) / 2;

	//�л����� ���

	//printf("�й�: %d, �̸�: %s, ����: %d, ����: %d, ���: %.1lf\n",s1.number,s1.name,s1.score.math,s1.score.eng, s1.score.avg);

	showStudentsInfo(s1);
	return 0;
}