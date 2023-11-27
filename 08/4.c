/*
課題番号：8
問題番号：4
作成年月日：2023/11/21
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
int main(void) {
    int i, j;
    char word[256];

    // 文字の入力
    printf("文字を入力してください：");
    scanf("%s", word);

    // 文字列の長さを求める
    for (i = 0; word[i] != '\0'; i++)
        ;

    // 回文判定
    for (j = 0; j <= i / 2; j++) {
        if (word[j] != word[i - j - 1]) {
            printf("回文ではない\n");
            break;
        } else if (j == i / 2) {
            printf("回文である\n");
        }
    }
    return 0;
}
