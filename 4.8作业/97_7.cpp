#include<iostream>
int cday(int year, int month, int day);
int main()
{
	printf("%d", cday(2019, 12, 21));
}
int cday(int year, int month, int day)
{
	int sum = 0, i;
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; //数组a存放普通年每月的天数
	int b[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 }; //数组b存放闰年的天数

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { //判断是否为闰年
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