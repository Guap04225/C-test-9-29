#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//��ӡ100-200������

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		//�ж�i�Ƿ�Ϊ����
		//�����жϵĹ���
		//1.�Գ���
		//����2 ->i-1
		int j = 0;
		for (j = 2; j <=sqrt(i); j++) //sqrt - ��ƽ������ѧ�⺯��
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j >sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
		printf("\ncount = %d",count);
	return 0;
}


//��ӡ1000-2000����

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�������
//		//1.�ܱ�4�������Ҳ��ܱ�100����
//		//2.�ܱ�400����
//
//		//if (year % 4 == 0 && year%100!=0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count ++;
//		}
//	}
//	printf("\n count = %d", count);
//	return 0;
//}