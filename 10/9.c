/*
課題番号：10
問題番号：9
作成年月日：2023/12/6
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
#include <string.h>
// 人数分の名前の入力
void input(char name[][64], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d番目の名前を入力:", i);
        scanf("%s", name[i]);
    }
}

// 入力された名前を文字列配列nameから探す
int search(char name[][64], int n, char *key) {
    int i, j, tmp;
    for (i = 0; i < n; i++) {
        if (strcmp(name[i], key) == 0) {
            return i;
            break;
        } else if (i == n - 1) {
            return -1;
        }
    }
}

//-1以外の場合は何番目に格納されているかを出力する
void show(char name[][64], int n, int key) {
    if (key == -1) {
        printf("見つかりません\n");
    } else {
        printf("%sは%d番目に格納されています。\n", name[key], key);
    }
}

int main(void) {
    // 変数の定義
    int i, tmp;
    char name[5][64];
    char key_name[64];

    // input関数を用いて名前の入力
    input(name, 5);

    // quitが入力されるまで名前の検索と表示を繰り返す
    while (1) {
        // 検索する名前の入力
        printf("検索する名前を入力→");
        scanf("%s", key_name);

        // 入力された文字列がquit以外だったらsearch関数で名前を探しshow関数で表示する
        if (strcmp(key_name, "quit") != 0) {
            show(name, 5, search(name, 5, key_name));
        } else {
            printf("終了します\n");
            break;
        }
    }

    return 0;
}