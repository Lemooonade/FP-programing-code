#include<iostream>
int main()
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
}