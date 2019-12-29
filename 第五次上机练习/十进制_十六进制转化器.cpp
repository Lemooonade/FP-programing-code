#include<iostream>
#define N 1024
using namespace std;
int main()
{
    int a[N], num_in, h = 0, length = 0;
    while (scanf("%d", &num_in) != EOF)
    {
        length = 0;
        h = 0;
        if (num_in == 0)
            cout <<"0"<<endl;
        else
        {
            while (num_in != 0)
            {
                a[h++] = num_in % 16;
                length++;
                num_in = num_in / 16;
            }
        }
        for (int i = length - 1; i >= 0; i--)
        {
            if (a[i] > 9 && a[i] < 16)
                printf("%c", a[i] + 55);
            else
                printf("%d", a[i]);
        }
        printf("\n");
    }
    return 0;
}