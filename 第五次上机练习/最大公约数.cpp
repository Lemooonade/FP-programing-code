#include<iostream>
int main()
{
    int x, y, min, num1, x_n, y_n;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        if (x<y)
        {
            min = x;
        }
        else
        {
            min = y;
        }
        for (int i = 1; i <= min; i++)
        {
            if (x % i == 0 && y % i == 0)
                num1 = i;
        }
        printf("%d\n", num1);
    }
}