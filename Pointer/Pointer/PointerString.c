#include <stdio.h>

int main() {
	//char word[] = "apple"; // ���ڿ� -1���� �迭
	//printf("%s\n", word);
	
	//2���� �迭 - word[�ܾ��� ����][ö���� �ִ밳��]
	char word[][10] = { "apple" ,"banana","grape"};
	int size;

	printf("%s\n", word[0]);
	printf("%s\n", word[1]);
	printf("%s\n", word[2]);
	
	printf("\n============================\n");

	size = sizeof(word) / sizeof(word[0]);
	printf("%d %d\n",sizeof(word),sizeof(word[0]));

	for (int i = 0; i < size; i++) {
		printf("%s\n", word[i]);
	}
	//���ڿ� ������
	char* fruit[] = { "apple","banana","grape" };
	printf("\n============================\n");

	printf("%s\n", fruit[0]);
	printf("%s\n", fruit[1]);
	printf("%s\n", fruit[2]);
	
	printf("\n============================\n");
	for (int i = 0; i < size; i++) {
		printf("%s\n",fruit[i]);
	}



	return 0;
}