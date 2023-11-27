/*
課題番号：3
問題番号：15
作成年月日：2023/10/11
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
int CtoInt(char);
int main(void){
  char a,b,c;
  scanf("%c",&a);
  a=CtoInt(a);
  
  scanf(" %c",&b);
     
  scanf(" %c",&c);
  c=CtoInt(c);

  switch(b){
  case 42:
    printf("%d\n",a*c);
    break;
  case 43:
    printf("%d\n",a+c);
    break;
  case 45:
    printf("%d\n",a-c);
    break;
  case 47:
    printf("%d\n",a/c);
    break;
  default:
    printf("error\n");
  };
  
  return 0;
}

int CtoInt(char x){
  return x-'0';
}
