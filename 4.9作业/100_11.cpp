#include<iostream>
char* strin(char* s1, char* s2)
{
	bool flag=true;
	for (int i = 0; i < strlen(s1); i++)
	{
		if (*(s1 + i) == *s2)
		{
			int tmp = i+1;
			for (int j = 1; j < strlen(s2); j++,tmp++)
			{
				if (*(s1 + tmp) != *(s2 + j))
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				return s1+i;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}
int main()
{
	char s1[] = "asdn";
	char s2[] = "asd";
	printf("%x",strin(s1, s2));
}