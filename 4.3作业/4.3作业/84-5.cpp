#include<iostream>

int leapyear(int a) 
{

	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) { //闰年判断条件
		return 1; //是闰年返回1
	}
	else {
		return 0; //不是闰年返回0
	}

}

int calculateDate(int year, int month, int day) 
{

	int sum = 0, i;
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; //数组a存放普通年每月的天数
	int b[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 }; //数组b存放闰年的天数

	if (leapyear(year) == 1) { //判断是否为闰年
		for (i = 0; i < month - 1; i++) {
			sum += b[i]; 
		}
	}
	else {
		for (i = 0; i < month - 1; i++) {
			sum += a[i]; 
		}
	}

	sum = sum + day;
	return sum;

}

int main() 
{

	int year, month, day, result;
	printf("请输入年月日\n");
	scanf("%d%d%d", &year, &month, &day); 
	result = calculateDate(year, month, day);
	printf("第%d天\n", result);
	return 0;
}