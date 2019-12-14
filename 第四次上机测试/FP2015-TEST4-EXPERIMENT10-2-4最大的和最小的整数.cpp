#include<iostream>
int main()
{
	int n, j = 0;
	int tmp_i;
	scanf("%d", &n);
	while (j < n)
	{
		int num[1000];
		int max_id=0, min_id=0,tmp;
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
			if (num[z]>num[max_id])
			{
				max_id = z;
			}
			if (num[z] < num[min_id])
			{
				min_id = z;
			}
		}
		tmp = num[max_id];
		num[max_id] = num[min_id];
		num[min_id] = tmp;
		for (int z = 0; z <= tmp_i; z++)
		{
			printf("%d ", num[z]);
		}
		printf("\n");
		j++;
	}
}