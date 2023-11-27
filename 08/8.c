/*
課題番号：8
問題番号：8
作成年月日：2023/11/21
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
int main(void) {
    int i;
    int score[5];
    char name[5][64];
    int max_i;
    double ave = 0;
    /*氏名と点数の入力 */

    for (i = 0; i < 5; i++) {
        printf("%d 番目の名前と点数を入力して下さい： ", i);
        scanf("%s %d", name[i], &score[i]);
    }

    /* 平均点計算 */
    for (i = 0; i < 5; i++) {
        ave += score[i];
    };
    ave /= 5.0;

    /* 最高点計算 */
    max_i = 0;
    for (i = 0; i < 5; i++) {
        if (score[max_i] < score[i]) {
            max_i = i;
        }
    }

    /* 画面表示 */
    printf("平均点： %f\n", ave);
    printf("最高点： %s %d\n", name[max_i], score[max_i]);

    return 0;
}