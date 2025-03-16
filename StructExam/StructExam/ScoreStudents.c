#define _CRT_SECURE_NO_WARNINGS //strcpy()
#include <stdio.h>
#include <string.h>

//성적 구조체
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

//학생정보 출력함수
void showStudentsInfo(Student st) //구조체 매개변수
{
	printf("학번: %d, 이름: %s, 수학: %d, 영어: %d, 평균: %.1lf\n",st.number,st.name,st.score.math,st.score.eng, st.score.avg);
}

int main_ScoreStudents() {
	//구조체 변수 선언
	Student s1;
	s1.number = 101;
	strcpy(s1.name, "이이슬");
	s1.score.math = 95;
	s1.score.eng = 80;

	//평균
	s1.score.avg = (double)(s1.score.math + s1.score.eng) / 2;

	//학생정보 출력

	//printf("학번: %d, 이름: %s, 수학: %d, 영어: %d, 평균: %.1lf\n",s1.number,s1.name,s1.score.math,s1.score.eng, s1.score.avg);

	showStudentsInfo(s1);
	return 0;
}