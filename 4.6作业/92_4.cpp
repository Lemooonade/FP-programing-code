#include<iostream>
bool check(char *ch);
int main()
{
	char ch1[1025],ch2[1025],*p;
	int num_ch=0;
	gets_s(ch1);
	for (int i = 0,j=0; i < strlen(ch1); i++)
	{
		if (ch1[i]>='a'&&ch1[i]<='z')
		{
			ch2[j] = ch1[i];
			j++;
			num_ch++;
			continue;
		}
		else if(ch1[i] >= 'A' && ch1[i] <= 'Z')
		{
			ch2[j] = ch1[i]-32;
			j++;
			num_ch++;
			continue;
		}
	}
	ch2[num_ch] = '\0';
	p = ch2;
	if (check(p))
	{
		printf("是回文");
	}
	else
	{
		printf("不是回文");
	}
}
bool check(char* ch)
{
	int n = sizeof(ch) / sizeof(char);
	for (int i = 0; i < n; i++)
	{
		if (ch[i] != ch[n - i-1])
		{
			return false;
		}
	}
	return true;
}