#include<stdio.h>
#include<string.h>
#define N 1024
int main()
{
    char string[N], s1[N], s2[N];
    int sum, i, j, length = 0, max = 0, loc = 0;
    gets(string);
    int len = strlen(string);
    for (i = 0; i < len; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z')
            length++;
        else if (string[i] == ' ')
        {
            if (length >= max)
            {
                max = length;
                loc = i;
            }
            length = 0;
        }
    }

    if (length > max)
    {
        max = length;
        loc = i;
    }
    for (int m = loc - max; m < loc; m++)
        printf("%c", string[m]);
    printf("\n");

    return 0;
}