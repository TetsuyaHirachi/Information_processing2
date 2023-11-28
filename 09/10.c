/*
課題番号：9
問題番号：10
作成年月日：2023/11/28
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
int main(void) {
    int i = 0;
    char s[256], t[256];
    char *p, *q;
    scanf("%s", s);
    p = s;
    q = t;

    do {
        *q = *(p + i);
        q + 1;
        i++;
        printf("p=%p,q=%p\n", p, q);
        printf("%c,%c\n", *q, *(p + i));
        printf("%d\n", i);
    } while (*(p + i) != '\0');

    printf("%s\n", t);
    printf("%s\n", s);
    printf("%c.%c,%c", t[0], t[1], t[2]);

    return 0;
}