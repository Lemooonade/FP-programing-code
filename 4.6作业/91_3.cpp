#include<iostream>
int main()
{
	char s2[1024],s1[1024];
	int len, i;
	gets_s(s2);
	for (i = 0;; i++)
	{
		if (s2[i] == '\0')
		{
			break;
		}
	}
	len = i;
	for (int j = 0; j <= len; j++)
	{
		s1[j] = s2[j];
		printf("%c", s1[j]);
	}

}