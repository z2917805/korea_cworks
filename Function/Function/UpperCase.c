#include <stdio.h>
#include <string.h>

void UpperCase(char);
int main_UpperCase()
{
	//���ڿ��� 1���� �迭�̴�.
	char buf[] = "i am a student";
	int length;
	int i;

	//printf("%s\n", buf);

	/*printf("%c\n", buf[0]);
	printf("%c\n", buf[1]);
	printf("%c\n", buf[2]);*/

	char c1 = 'i';
	char c2 = 'I';

	printf("%c %d\n", c1, c1);
	printf("%c %d\n", c2, c2);

	length = strlen(buf);
	//printf("���ڿ��� ����: %d\n", length);

	for (i = 0; i < length; i++)
	{
		//printf("%c", buf[i]);  //�ҹ���
		UpperCase(buf[i]);
	}
	
	return 0;
}

void UpperCase(char data)
{
	//'a' - 97, 'A' - 65 (���: 32)
	if (data >= 'a' && data <= 'z')
	{
		data = data - ('a' - 'A'); //�빮�ڷ� ��ȯ
	}
	printf("%c", data);
}

