#include <stdio.h>
#define K 3
#define M 2
#define N 3
int main(void)
{
    int i, j, k, sum;
    int a[K][M];
    int b[M][N];
    int c[K][N];

    for (i = 0; i < K; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("b[%d][%d]=", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < K; i++)
    {
        for (j = 0; j < N; j++)
        {
            sum = 0;
            for (k = 0; k < M; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    for (i = 0; i < K; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%5d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}