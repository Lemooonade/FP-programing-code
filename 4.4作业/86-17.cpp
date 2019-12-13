#include<iostream>
int main()
{
	int yin1=0, yin2=0;
	for(int i=2;i<=2000;i++)
	{
		for (int k = 2; k < 2000; k++)
		{
			yin1 = 0, yin2 = 0;
			for (int j = 1; j < i; j++)
			{
				if (i % j == 0)
				{
					yin1 += j;
				}
			}
			for (int  z = 1; z < k; z++)
			{
				if (k % z == 0)
				{
					yin2 += z;
				}
			}
			if (yin1 == k && yin2 == i )
			{
				if (i != k)
				{
					printf("%d\t%d\n", i, k);

				}
			}
		}

		
	}
}