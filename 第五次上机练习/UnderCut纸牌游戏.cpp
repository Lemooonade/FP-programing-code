#include<stdio.h>
#define MAXN 26

int main()
{
    //每一轮出多少张牌 
    int N;
    //用两个数组装填整轮的双方的牌
    int A[MAXN], B[MAXN];
    //记录出轮数
    while (scanf("%d", &N) && N)
    {
        int i;
        //分别读取玩家A，B的牌
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < N; i++)
        {
            scanf("%d",&B[i]);
        }
        //记录每一个玩家的牌点分                        
        int pointsA = 0;
        int pointsB = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] > B[i])
            {
                if (A[i] == 2 && B[i] == 1)
                    pointsB += 6;
                else if (A[i] - B[i] == 1)
                    pointsB += (A[i] + B[i]);
                else
                    pointsA += A[i];
            }
            else if (A[i] < B[i])
            {
                if (A[i] == 1 && B[i] == 2)
                    pointsA += 6;
                else if (B[i] - A[i] == 1)
                    pointsA += (A[i] + B[i]);
                else
                    pointsB += B[i];
            }
        }
        printf("A has %d points. B has %d points.\n", pointsA, pointsB);
    }
    return 0;
}