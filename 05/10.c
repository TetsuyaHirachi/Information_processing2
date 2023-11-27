#include <stdio.h>
int main(void)
{
  int input[10], i, k, j, num;
  for (i = 0; i <= 9; i++)
  {
    scanf("%d", &input[i]);
  }
  for (k = 0; k <= 8; k++)
  {
    for (j = k + 1; j <= 9; j++)
    {
      if (input[k] > input[j])
      {
        num = input[k];
        input[k] = input[j];
        input[j] = num;
      }
    }
  }
  printf("昇順：");
  for (i = 0; i <= 9; i++)
  {
    printf("%d", input[i]);
  }
  printf("\n");
  printf("最大値：%d\n", input[9]);
  printf("最小値：%d\n", input[0]);
  for (j = 0; j <= 9; j++)
  {
    num += input[j];
  }
  printf("平均値：%d\n", num / 10);
  return 0;
}
