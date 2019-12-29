#include<stdio.h>

#define N 1024
int main()
{
    int nums[N], flag = 0, n, loc, j, num;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        j = 0;
        do
        {
            scanf("%d", &nums[j]);
            j++;
        } while (nums[j - 1] != 0);
        scanf("%d", &num);
        for (int k = 0; k < j - 1; k++)
        {
            if (nums[k] == num)
            {
                loc = k + 1;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            printf("%d\n", loc);
        else
            printf("0\n");


    }
}