/*
課題番号：9
問題番号：10
作成年月日：2023/11/29
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
int main(void) {
    int i = 0;
    char s[256], t[256];
    char *p, *q;
    printf("s:");
    scanf("%s", s);
    p = s;
    q = t;

    // 文字列のコピー
    do {
        *q = *p;
        q++;
    } while (*p++ != '\0');

    printf("t:%s\n", t);

    return 0;
}