#include<iostream>
#include<math.h>
void menu()
{
	printf("-----------\n");
	printf("C1.1------1\n");
	printf("C1.2------2\n");
	printf("C1.3------3\n");
}
void C1_1()
{
	char n1[1024] = { 0 }, n2[1024] = {0},tmp_str[2500];
	int sum[2000];
	int tmp,num_length,flag=0,sign_tag;
	scanf("%s", tmp_str);
	for (int i = 0; i < strlen(tmp_str); i++)
	{
		if (tmp_str[i] == '+' || tmp_str[i] == '-')
		{
			sign_tag = i;
			break;
		}
		n1[i] = tmp_str[i];
	}
	for (int i = sign_tag+1; i < strlen(tmp_str); i++)
	{
		n2[i-1-sign_tag] = tmp_str[i];
	}
	num_length = strlen(n1) > strlen(n2) ? strlen(n1) : strlen(n2);
	if (tmp_str[sign_tag] == '+')
	{
		for (int i = 1; i <= num_length; i++)
		{
			tmp = n1[i - 1] - '0' + n2[i - 1] - '0';
			if (tmp >= 10)
			{
				sum[i] = tmp % 10;
				sum[i - 1]++;
				flag = 1;
			}
			sum[i] = tmp;
		}
		if (flag == 1)
		{
			printf("%d", sum[0]);
		}
		for (int j = 1; j <= num_length; j++)
		{
			printf("%d", sum[j]);
		}
		printf("\n\n");
	}
}
void C1_2()
{
	int n,s;
	printf("C1.2\n输入一个整数判断该数是否为自首数\n");
	printf("请输入一个整数\n");
	scanf("%d", &n);
	s = pow(n, 2);
	if (n % 10 == s % 10)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}
void C1_3()
{
	int num, opt;
	printf("请输入一个整数操作数");
	scanf("%d", &num);
	printf("该数是多少进制\n");
	printf("*-----------*\n");
	printf("*十进制-----1\n");
	switch (opt)
	{
	case 1:
	default:
		break;
	}

}
int main()
{
	int option;
	
	while (1)
	{
		menu();
		scanf("%d", &option);
		switch (option)
		{
		case 1: C1_1(); break;
		case 2: C1_2(); break;
		default:
			break;
		}
	}

}