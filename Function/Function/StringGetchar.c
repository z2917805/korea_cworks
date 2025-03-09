#include <stdio.h>

int main_stringetchar() {
	//getchar() - 문자 1개 입력

	//버퍼(buffer) - 임시기억장소

	/*char c1, c2;*/

	//printf("입력하세요:");
	//c1 = getchar(); //입력 ex 'a'입력받음(버퍼에는 '\n'이 남아 있음)
	//while (getchar() != '\n'); //'\n'을 지워버림
	//c2 = getchar(); 

	//printf("%c %c\n",c1,c2); //출력 

	char name[20];
	int age;

	printf("이름 입력:");
	//scanf_s("%s", name, sizeof(name));
	fgets(name, sizeof(name), stdin);

	while (getchar() != '\n');

	printf("나이 입력:");
	scanf_s("%d",&age);

	printf("이름: %s, 나이: %d", name, age);

	return 0;
}