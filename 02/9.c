/*
課題番号：2
問題番号：9
作成年月日：2023/10/3
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
int main(void){
  //x,y,zを定義する
  int x,y,z;
  //x,y,zを入力する
  printf("x,y：");
  scanf("%d,%d",&x,&y);
  
  //x*yをｚに代入する
  z=x*y;
  printf("%d*%d=%d\n",x,y,z);
  
  //x/yをｚに代入する
  z=x/y;
  printf("%d/%d=%d\n",x,y,z);
  
  //x%yをｚに代入する
  z=x%y;
  printf("%d%%%d=%d\n",x,y,z);
  
  return 0;
}
