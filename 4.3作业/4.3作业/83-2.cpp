#include<iostream>
int main()
{
	char n1,n2,n3;
	scanf("%c%c%c", &n1,&n2,&n3);
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