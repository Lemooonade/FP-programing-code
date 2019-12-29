#include<iostream>
#include<math.h>
int changeS(char* string)
{
	int num=0,len=0;
	char* tmp;
	tmp = string;
	if (*tmp=='-')
	{
		while (*tmp != '\0')
		{
			len++;
			tmp++;
		}
		len--;
		string++;
		while (*string!='\0')
		{
			num = num + (*string - '0') * pow(10,len-1);
			len--;
			string++;
		}
		return -num;
	}
	else
	{
		while (*tmp != '\0')
		{
			len++;
			tmp++;
		}
		while (*string != '\0')
		{
			num = num + (*string - '0') * pow(10, len - 1);
			len--;
			string++;
		}
		return num;

	}
}
int main()
{
	char a[] = "1234";
	printf("%d", changeS(a));
}