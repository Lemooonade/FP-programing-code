#include<iostream>
int main()
{
	char c[6],s[6];
	int i;
	s[0] = getchar();
	s[1] = getchar();
	s[2] = getchar();
	s[3] = getchar();
	s[4] = getchar();
	s[5] = getchar();
	for (int i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a') && (s[i]) <= 'z')
		{
			c[i] = (s[i] - 'a' + 4) % 26 + 'a';
		}
		else if ((s[i] >= 'A') && (s[i]) <= 'Z')
		{
			c[i] = (s[i] - 'A' + 4) % 26 + 'A';
		}
	}
	c[5] = '\0';
	printf("%s", c);
	return 0;
}