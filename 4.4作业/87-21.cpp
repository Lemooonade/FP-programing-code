#include<iostream>
int main()
{
	bool s=1;
	for (int i = 1; i < 100; i += 2)
	{
		if ((i*i) % 8 != 1)
		{
			s = 0;
			break;
		}
	}
	if (s == 1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}