/*
課題番号：2
問題番号：11
作成年月日：2023/10/3
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
int main(void){
  int n,sum=1;
  scanf("%d",&n);
  while(n>0){
    sum*=n;
    n--;
  }
  printf("%d\n",sum);
  return 0;
}
