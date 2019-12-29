#include<iostream>
int main()
{
	int n, j = 0;
	int tmp_i,num_id=0;
	scanf("%d", &n);
	while (j < n)
	{
		int num[1000];
		scanf("%d", &num[0]);
		for (int i = 1;; i++)
		{
			scanf("%d", &num[i]);
			if (num[i] == 0)
			{
				tmp_i = i - 1;
				break;
			}
		}
		for (int z = 1; z <= tmp_i; z++)
		{
			if (num[z]==num[0])
			{
				num_id++;
			}
		}
		printf("%d\n",num_id);
		num_id = 0;
		j++;
	}
}