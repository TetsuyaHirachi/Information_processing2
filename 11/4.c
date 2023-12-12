/*
課題番号：11
問題番号：4
作成年月日：2023/12/13
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  char s[256];
  char *t;
  int n;

  //文字列の入力
  printf("文字列を入力してください\ns:");
  scanf("%s",s);

  //文字列の長さ分メモリを確保する
  n=strlen(s);
  t=(char *)malloc(sizeof(char)*(n+1));

  //メモリの確保ができていればtにsをコピーする
  if(t!=NULL){
    strcpy(t,s);
    printf("t:%s\n",t);
  }
  
  //メモリを開放する
  free(t);
  return 0;
}
