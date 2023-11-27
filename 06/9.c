/*
課題番号：6
問題番号：9
作成年月日：2023/11/5
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
int main(void)
{
    float rev, num, det = 0.0;
    float A[2][2], B[2], C[2] = {0.0, 0.0};
    int i, j, k;

    // Aの配列を入力
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("A[%d][%d]=", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    // Bの配列を入力
    for (i = 0; i < 2; i++)
    {
        printf("B[%d]=", i);
        scanf("%f", &B[i]);
    }

    // 行列式の計算
    det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

    // 行列式の0の判定
    if (det == 0)
    {
        printf("逆行列が存在しません\n");
    }
    else
    {
        // 逆行列の計算
        rev = 1 / det;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                A[i][j] *= rev;
            }
        }

        A[0][1] *= -1;
        A[1][0] *= -1;

        num = A[0][0];
        A[0][0] = A[1][1];
        A[1][1] = num;

        // 解の計算
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                C[i] += A[i][j] * B[j];
            }
        }
        printf("x=%f,y=%f", C[0], C[1]);
    }

    return 0;
}