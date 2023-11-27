/*
課題番号：2
問題番号：15
作成年月日：2023/10/3
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
int main(void){
  int num,i;
  scanf("%d",&num);
  for(i=1;i<=3;i++){
    printf("%d\n",num/100);
    num=num%100*10;
  }
  return 0;
}
