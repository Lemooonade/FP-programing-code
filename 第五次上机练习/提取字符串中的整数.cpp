#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1024
int main()
{
    int n, m = 0, k;
    char string[N];
    int num[N], sum;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {

        m = 0;
        gets(string);
        int len = strlen(string);
        for (int j = 0; j < len; j++)
        {
            sum = 0;
            if (string[j] >= '0' && string[j] <= '9')
            {
                for (k = j; ; k++)
                {
                    if (string[k] < '0' || string[k] > '9')
                        break;
                }
                for (int p = k - 1; p >= j; p--)
                    sum += ((int)string[p] - 48) * (pow(10, (k - 1 - p)));
                num[m++] = sum;
                j = k - 1;
                num[m++] = -1;
            }
        }
        for (int n = 0; n < m; n++)
        {
            if (num[n] == -1)
                printf(" ");
            else
                printf("%d", num[n]);
        }
        printf("\n");
    }
    return 0;
}