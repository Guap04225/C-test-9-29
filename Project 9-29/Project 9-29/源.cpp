#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//打印100-200的素数

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		//判断i是否为素数
		//素数判断的规则
		//1.试除法
		//产生2 ->i-1
		int j = 0;
		for (j = 2; j <=sqrt(i); j++) //sqrt - 开平方的数学库函数
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


//打印1000-2000闰年

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否是闰年
//		//1.能被4整除并且不能被100整除
//		//2.能被400整除
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