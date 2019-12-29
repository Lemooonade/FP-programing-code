#include<iostream>
int main()
{
	int n, j = 0;
	int tmp_i;
	scanf("%d", &n);
	while (j < n)
	{
		int num[1000];
		int search_num,search_num_id;
		bool flag=0;
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
		scanf("%d", &search_num);
		for (int z = 0; z <= tmp_i; z++)
		{
			if (search_num==num[z])
			{
				flag = 1;
				search_num_id = z+1;
			}
			else
			{
				continue;
			}
		}
		if (flag==0)
		{
			printf("0");
		}
		else
		{
			printf("%d", search_num_id);
		}
		printf("\n");
		j++;
	}
}