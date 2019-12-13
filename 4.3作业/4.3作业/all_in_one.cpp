#include<iostream>
#include<math.h>
int option()
{
	int i;
	printf("请输入题目序号\n");
	printf("1:  4.3.2--1\t");
	printf("2:  4.3.2--2\n");
	printf("3:  4.3.2--3\t");
	printf("4:  4.3.2--4\n");
	printf("5:  4.3.2--5\t");
	printf("6:  4.3.2--6\n");
	printf("7:  4.3.2--7\t");
	printf("8:  4.3.2--8\n");
	printf("9:  4.3.2--9\t");
	printf("10:  4.3.3--10\n");
	printf("11:  4.3.3--1\t");
	printf("12:  4.3.3--2\n");
	printf("13:  4.3.3--3\t");
	printf("14:  4.3.3--4\n");
	printf("15:  4.3.3--5\t");
	printf("16:  4.3.3--6\n");
	printf("17:  4.3.3--7\n");
	scanf("%d", &i);
	return i;
}
int exe1()
{
	int n1, n2, n3;
	scanf_s("%d%d%d", &n1, &n2, &n3);
	if (n1 >= n2 && n1 >= n3)
	{
		printf("The max is %d", n1);
	}
	else if (n2 >= n1 && n2 >= n3)
	{
		printf("The max is %d", n2);
	}
	else if (n3 >= n1 && n3 >= n2)
	{
		printf("The max is %d", n3);
	}
	return 0;
}
int exe2()
{
	char n1, n2, n3;
	scanf("%c%c%c", &n1, &n2, &n3);
	if (n1 <= n2 && n1 <= n3)
	{
		printf("The min is %c", n1);
	}
	else if (n2 <= n1 && n2 <= n3)
	{
		printf("The min is %c", n2);
	}
	else if (n3 <= n1 && n3 <= n2)
	{
		printf("The min is %c", n3);
	}
	return 0;
}
int exe3()
{
	double a, b, c, delta;
	scanf("%lf%lf%lf", &a, &b, &c);
	delta = pow(b, 2) - 4 * a * c;
	if (delta < 0)
	{
		printf("方程的一个虚根=%.2lf+%.2lfi", -b / (2 * a), sqrt(-delta) / (2 * a));
		printf("方程的另一个虚根=%.2lf-%.2lfi", -b / (2 * a), sqrt(-delta) / (2 * a));
	}
	else if (delta == 0)
	{
		printf("方程有两个相同的实根=%.2lf", (-b) / (2 * a));
	}
	else
	{
		printf("方程的一个实根=%.2lf", -b + sqrt(delta) / (2 * a));
		printf("方程的另一个实根=%.2lf", -b - sqrt(delta) / (2 * a));
	}
	return 0;
}
int exe4()
{
	float score;
	scanf("%f", &score);
	if (score >= 90)
		printf("A");
	else if (score >= 80 && score <= 89)
		printf("B");
	else if (score >= 70 && score <= 79)
		printf("C");
	else if (score >= 60 && score <= 69)
		printf("D");
	else if (score < 60)
		printf("E");
	return 0;
}
int exe5()
{
	int a, b, c, d, e, f;
	scanf("%d%d%d", &a, &b, &c);
	if (a >= b && a >= c)
	{
		f = a;
		if (b >= c)
		{
			e = b;
			d = c;
		}
		else
		{
			e = c;
			d = b;
		}
	}
	if (b >= a && b >= c)
	{
		f = b;
		if (a >= c)
		{
			e = a;
			d = c;
		}
		else
		{
			e = c;
			d = a;
		}
	}
	if (c >= a && c >= b)
	{
		f = c;
		if (a >= b)
		{
			e = a;
			d = b;
		}
		else
		{
			e = b;
			d = a;
		}
	}
	printf("%d<%d<%d", d, e, f);
	return 0;
}
int exe6()
{
	int n;
	scanf("%d", &n);
	if (n % 2 == 0 && n % 3 == 0 && n % 5 == 0)
	{
		printf("It can be devided by 2,3,5");
	}
	else
	{
		printf("It can't be devided by 2,3,5");
	}
	return 0;
}
int exe7()
{
	char n1;
	scanf("%c", &n1);
	if ((n1 <= 'Z' && n1 >= 'A') || (n1 <= 'z' && n1 >= 'a'))
	{
		if (n1 <= 'Z' && n1 >= 'A')
		{
			n1 = n1 + 32;
		}
		else
		{
			n1 = n1 - 32;
		}
		printf("%c", n1);
	}
	else
	{
		printf("The charactor need not to be changed");
	}
	return 0;
}
int exe8()
{
	int n;
	scanf("%d", &n);
	if ((n % 2) == 0)
	{
		printf("这是一个偶数");
	}
	else
	{
		printf("这是一个奇数");
	}
	return 0;
}
int exe9()
{
	int price;
	float fee;
	scanf("%d", &price);
	if (price >= 10000)
	{
		fee = price * 0.05;
	}
	else if (price > 5000 && price < 10000)
	{
		fee = price * 0.03;
	}
	else if (price > 1000 && price <= 5000)
	{
		fee = price * 0.02;
	}
	else if (price <= 1000)
	{
		fee = 0.0;
	}
	printf("%.2f", fee);
	return 0;
}
int exe10()
{
	int class_num;
	scanf("%d", &class_num);
	switch (class_num)
	{
	case 91:
		printf("30人");
		break;
	case 92:
		printf("32人");
		break;
	case 93:
		printf("30人");
		break;
	case 94:
		printf("30人");
		break;
	case 95:
		printf("32人");
		break;
	default:
		printf("请输入正确的班级号");
		break;
	}
	return 0;
}
int exe11()
{
	float x, y;
	scanf("%f", &x);
	if (x < 1)
	{
		y = x;
	}
	else if (x >= 1 && x < 15)
	{
		y = 2 * x - 1;
	}
	else
	{
		y = 6 * x + pow(x, 2);
	}
	printf("%.2f", y);
	return 0;
}
int exe12()
{
	float x, y, z;
	printf("请输入横坐标和纵坐标\n");
	scanf("%f %f", &x, &y);
	if (x > 0 && y > 0)
	{
		z = log(x) + log(y);
	}
	else if (x < 0 && y>0)
	{
		z = sin(x) + sin(y);
	}
	else if (x < 0 && y < 0)
	{
		z = exp(2 * x) + exp(3 * x);
	}
	else if (x > 0 && y < 0)
	{
		z = tan(x + y);
	}
	printf("%.2f", z);
	return 0;
}
int get_len(int x)
{
	int num_lens = 0;
	while (x)
	{
		x = x / 10;
		num_lens++;
	}
	return num_lens;
}
int get_rever(int y)
{
	int num_rever = 0, num_len, num_rate = 1, i = 0;
	int n[5];
	n[0] = y % 10;  //个位数
	n[1] = y % 100 / 10;  //十位数
	n[2] = y % 1000 / 100; //百位数
	n[3] = y % 10000 / 1000; //千位数
	n[4] = y / 10000; //万位数
	num_len = get_len(y);
	while (num_len > 1)
	{
		num_rate *= 10;
		num_len--;
		//printf("%d\n", num_rate);  调试用
	}
	num_len = get_len(y);
	while (num_len > 0)
	{
		num_rever = num_rever + n[i] * num_rate;
		num_rate = num_rate / 10;
		num_len = num_len - 1;
		i++;
	}
	return num_rever;
}
int exe13()
{
	int num;
	scanf("%d", &num);
	printf("这是%d位数\n", get_len(num));
	printf("%d", get_rever(num));
	return 0;
}
int exe14()
{
	int a, b, result1, result2;
	scanf("%d%d", &a, &b);
	if (b == 0)
	{
		printf("ERROR");
	}
	else
	{
		result1 = a / b;
		result2 = a % b;
		printf("商%d,余%d", result1, result2);
	}
	return 0;
}
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
int exe15()
{
	int year, month, day, result;
	printf("请输入年月日\n");
	scanf("%d%d%d", &year, &month, &day);
	result = calculateDate(year, month, day);
	printf("第%d天\n", result);
	return 0;
}
int exe16()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a + b < c || a + c < b || b + c < a)
	{
		printf("不能构成三角形");
	}
	else
	{
		if ((a * a + b * b == c * c && a == b) || (a * a + c * c == b * b && a == c) || (c * c + b * b == a * a && b == c))
		{
			printf("为等腰直角三角形");
		}
		else if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
		{
			printf("为直角三角形");
		}
		else
		{
			printf("为等腰三角形");
		}
	}
	return 0;
}
int exe17()
{
	int option;
	float n1, n2;
	printf("请先输入两个操作数\n");
	scanf("%f%f", &n1, &n2);
	printf("你希望这两个数做什么操作\n1.加法\n2.减法\n3.乘法\n4.除法\n");
	scanf("%d", &option);
	switch (option)
	{
	case 1:
		printf("%.0f", (n1 + n2));
		break;
	case 2:
		printf("%.0f", (n1 - n2));
		break;
	case 3:
		printf("%.0f", (n1 * n2));
		break;
	case 4:
		printf("%.2f", (n1 / n2));
		break;
	default:
		printf("请输入正确的数字\n");
		break;
	}
	return 0;
}
int main()
{
	int option1;
	option1 = option();
	switch (option1)
	{
	case 1:
		exe1();
		break;
	case 2:
		exe2();
		break;
	case 3:
		exe3();
		break;
	case 4:
		exe4();
		break;
	case 5:
		exe5();
		break;
	case 6:
		exe6();
		break;
	case 7:
		exe7();
		break;
	case 8:
		exe8();
		break;
	case 9:
		exe9();
		break;
	case 10:
		exe10();
		break;
	case 11:
		exe11();
		break;
	case 12:
		exe12();
		break;
	case 13:
		exe13();
		break;
	case 14:
		exe14();
		break;
	case 15:
		exe15();
		break;
	case 16:
		exe16();
		break;
	case 17:
		exe17();
		break;
	default:
		printf("请输入正确的选项");
		break;
	}
}