/*
課題番号：11
問題番号：4
作成年月日：2023/12/12
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
    printf("文字列を入力してください\ns:");
    scanf("%s",s);

    n=strlen(s);
    t=(char *)malloc(sizeof(char)*(n+1));

    strcpy(t,s);
    printf("t:%s\n",t);

    free(t);
    return 0;
}
