//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//
////��¥�� �ð� ���
//int main()
//{
//	time_t ct; //���� �ð��� �˱����� time_t ���� ����
//	struct tm* now;  //tm ����ü�� ��ü ����
//
//	time(&ct);
//	now = localtime(&ct);  //��¥ ������.
//
//	//��¥ �ð� ���
//	printf("���� �⵵: %d\n", now->tm_year + 1900);
//	printf("���� ��: %d\n", now->tm_mon + 1);
//	printf("���� ��: %d\n", now->tm_mday);
//	printf("���� ��¥: %d. %d. %d.\n", 
//		now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);
//
//	printf("���� ��: %d\n", now->tm_hour);
//	printf("���� ��: %d\n", now->tm_min);
//	printf("���� ��: %d\n", now->tm_sec);
//	printf("���� ��: %d : %d : %d\n", 
//		now->tm_hour, now->tm_min, now->tm_sec);
//
//	//���� ����  0-��, 1-��, 2-ȭ, 3-��, 4-��, 5-��, 6-��
//	printf("���� ����: %d\n", now->tm_wday);
//
//	//���� ���(���ǹ� - if, switch)
//	//������ ������̴�.
//	switch (now->tm_wday)
//	{
//	case 0: printf("������ �Ͽ����Դϴ�."); break;
//	case 1: printf("������ �������Դϴ�."); break;
//	case 2: printf("������ ȭ�����Դϴ�."); break;
//	case 3: printf("������ �������Դϴ�."); break;
//	case 4: printf("������ ������Դϴ�."); break;
//	case 5: printf("������ �ݿ����Դϴ�."); break;
//	case 6: printf("������ ������Դϴ�."); break;
//	default: printf("������ �����ϴ�."); break;
//	}
//
//	return 0;
//}