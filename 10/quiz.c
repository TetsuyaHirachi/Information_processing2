/*
QUIZ:10
作成年月日：2023/12/6
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
// 配列に九九を入力
int func(int x[][9], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 9; j++) {
            x[i][j] = (i + 1) * (j + 1);
        }
    }
}

// 九九が入った配列の表示
int show(int x[][9], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%5d", x[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int kuku[9][9];
    func(kuku, 9);
    show(kuku, 9);
    return 0;
}