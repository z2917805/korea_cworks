#include <stdint.h>

//Point ����ü ����

struct Point {

	int x;
	int y;
};

//Rectangle ����ü ����


struct Rectangle
{
	struct Point p1; //����ü ����(Reference)
	struct Point p2;
};

int main_PointRect() {

	//�簢���� �׸��� ���� �ΰ��� ���� ��ǥ ����
	struct Rectangle rect;

	rect.p1.x = 1;
	rect.p1.y = 4;

	rect.p2.x = 4;
	rect.p2.y = 1;

	printf("��1(%d, %d), ��2(%d, %d)\n", rect.p1.x, rect.p1.y, rect.p2.x, rect.p2.y);



	/*rect.x1 = 2;
	rect.y1 = 5;

	rect.x2 = 5;
	rect.y2 = 5;*/


	/*printf("��1(%d, %d)\n", rect.x1, rect.y1);
	printf("��2(%d, %d)\n", rect.x2, rect.y2);*/

	return 0;
}