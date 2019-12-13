#include<iostream>
int main()
{
	char s;
	int n_space = 0, n_E = 0, n_e = 0, n_num = 0, n_other = 0;
	while (1)
	{
		scanf("%c", &s);
		if (s == ' ')
		{
			n_space++;
		}
		else if (s>='a'&&s<='z')
		{
			n_e++;
		}
		else if(s>='A'&&s<='Z')
		{
			n_E++;
		}
		else if (s>='0'&&s<='9')
		{
			n_num++;
		}
		else if (s=='#')
		{
			break;
		}
		else
		{
			n_other++;
		}
	}
	printf("空格数%d,小写字母数%d,大写字母数%d,数字字符%d,其他字符%d", n_space, n_e, n_E, n_num, n_other);
}