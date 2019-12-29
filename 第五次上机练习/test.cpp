#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d", &a);
	for (b = 0; b < a; b++)
	{
		char a[1024], * p;
		p = a;
		setbuf(stdin, NULL);
		gets(a);
		for (; *p != '\0'; p++)
		{
			if (*p >= '0' && *p <= '9')
			{
				printf("%c", *p);
				if (*(p + 1) < '0' || *(p + 1) > '9')
					printf(" ");
			}
		}
		printf("\n");
	}
}
