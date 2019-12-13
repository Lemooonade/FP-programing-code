#include<iostream>
int main()
{
	for (int i = 0; i <= 100; i++)
	{
		for (int j = 0; j <= 100; j++)
		{
			for (int k = 0; k <= 100; k++)
			{
				if ((i+j+k)==100&&(i*3+j*2+k*0.5)==100)
				{
					printf("大马%d匹,中马%d匹,小马%d匹\n", i, j, k);
				}
			}
		}
	}
}