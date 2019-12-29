#include<iostream>
int main()
{
	struct test
	{
		char str1[100];
		int str_num;
	} test2;
	scanf("%s", test2.str1);
	scanf("%d", &test2.str_num);
	printf("\n\n%s\n%d", test2.str1, test2.str_num);
}