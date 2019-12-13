#include<iostream>
int main()
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
}