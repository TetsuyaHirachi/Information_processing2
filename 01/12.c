/*
課題番号：1
問題番号：12
作成年月日：2023/9/26
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
int main(void){
  int num,r;
  num=0;
  r=0;
  while(num<1){
    printf("１以上の数字を入力してください。\n");
    scanf("%d",&num);
  }
  while(num>0){
    r*=10;
    r+=num%10;
    num/=10;
  }
  printf("%d\n",r);
  return 0;
}
