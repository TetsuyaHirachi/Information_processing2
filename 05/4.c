/*
課題番号：5
問題番号：4
作成年月日：2023/10/24
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
#include <math.h>
int main(void)
{
  double a[10], sum = 0.0, ave, num;
  int i;

  // 数値の入力
  for (i = 0; i <= 9; i++)
  {
    printf("%d個目：", i + 1);
    scanf("%lf", &a[i]);
  }

  // 最大値の出力
  num = a[0];
  for (i = 0; i <= 9; i++)
  {
    if (num < a[i])
    {
      num = a[i];
    }
  }
  printf("最大値：%lf\n", num);

  // 最小値の出力
  for (i = 0; i <= 9; i++)
  {
    if (num > a[i])
    {
      num = a[i];
    }
  }
  printf("最小値：%lf\n", num);

  // 平均値の出力
  for (i = 0; i <= 9; i++)
  {
    sum += a[i];
  }
  ave = sum / 10;
  printf("平均値：%lf\n", ave);

  // 分散の出力
  sum = 0.0;
  for (i = 0; i <= 9; i++)
  {
    sum = (ave - a[i]) * (ave - a[i]) + sum;
  }
  printf("分散：%lf\n", sum / 10);

  // 標準偏差の出力
  printf("標準偏差：%lf\n", sqrt(sum / 10.0));

  return 0;
}
