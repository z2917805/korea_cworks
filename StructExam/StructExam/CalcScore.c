#include <stdio.h>

//���� ����ü
typedef struct {
	int math;
	int eng;

}Score;

typedef struct {
	int number;
	char name[20];
	Score score;

}Student;

int main() {
	//����ü �迭 ����
	Student s[3];
	printf("\n=============�������� ���α׷�=============\n");
	//�ܼ� �Է�
	for (int i = 0; i < 3; i++) {
		printf("�й� �Է�: ");
		scanf_s("%d", &s[i].number);
	}

	//�л� ���� ���
	for (int i = 0; i < 3; i++) {
		printf("�й� �Է�: %d:\n ", s[i].number);
	}


	return 0;
}