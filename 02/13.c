/*
課題番号：2
問題番号：13
作成年月日：2023/10/3
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
int main(void){
  int a,b;
  printf("a,b：");
  scanf("%d,%d",&a,&b);
  printf("x^2の係数は%d,x^1の係数は%d,x^0の係数は%d\n",a*a,2*a*b,b*b);
  return 0;
}
