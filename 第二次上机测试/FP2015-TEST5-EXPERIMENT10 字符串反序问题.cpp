#include<iostream>
#include<string.h>
#include<string>
int main()
{
	char str[1000];
	int n;
	scanf("%d", &n);
	while (n>0)
	{
		scanf("%s", str);
		for (int i = strlen(str)-1; i >= 0; i--)
		{
			printf("%c", str[i]);
		}
		printf("\n");
		n--;
	}
}