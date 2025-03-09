#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char* words[] = { "ant","bat","bear","cat","deer","fox","horse","monkey","tiger","zebra" };
	char *question; //����
	char answer[20]; //����� �Է�
	int n = 1; // ���� ��ȣ

	clock_t start, end; // ���۽ð�, ����ð�
	double elapsed; //�ҿ�ð�
	int size,idx; // �迭�� ũ��

	srand(time(NULL));

	printf("���� Ÿ�� ����, �غ�Ǹ� ����>");
	getchar();

	start = clock(); //���۽ð�

	while (n <= 10) {
		printf("\n���� %d",n);
		size = sizeof (words) / sizeof (words[0]);
		idx = rand() % size;
		question = words[idx];
		printf("%s\n",question);
		scanf_s("%s", answer, sizeof(answer));

		if (strcmp(question, answer) == 0) {  //��ġ�ϸ�
			printf("���!\n");
			n++; //��������
		}
		else {
			printf("��Ÿ! �ٽõ���!");
		}
	}
	//CLOCKS_PER_SEC : ��� ms(����ũ����)�� s(��)�� ǥ������
	end = clock();
	elapsed = (double)(end - start) / CLOCKS_PER_SEC;
		printf("���� �ҿ� �Ⱓ: %.2lf��\n", elapsed);


	return 0;
}