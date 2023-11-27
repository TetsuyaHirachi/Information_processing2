/*
課題番号：4
問題番号：5
作成年月日：2023/10/18
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
int recursive_combination(int, int);
int main(void)
{
  int n, r;
  printf("n,r=");
  scanf("%d,%d", &n, &r);
  printf("%d\n", recursive_combination(n, r));
  return 0;
}

int recursive_combination(int x, int y)
{
  if (x == y || y == 0)
  {
    return 1;
  }
  else if (y == 1)
  {
    return x;
  }
  else
  {
    return recursive_combination(x - 1, y - 1) + recursive_combination(x - 1, y);
  }
}