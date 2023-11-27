/*
課題番号：2
問題番号：14
作成年月日：2023/10/3
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
int main(void){
  int x,y;
  printf("x,y:");
  scanf("%d,%d",&x,&y);
  x-=x/y*y;
  printf("あまりは%dです\n",x);
  return 0;
}
