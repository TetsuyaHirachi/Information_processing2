/*
課題番号：10
問題番号：9
作成年月日：2023/12/6
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
// 人数分の名前の入力
void input(char name[][64], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d番目の名前を入力:", i);
        scanf("%s", name[i]);
    }
}

// 与えられた名前を文字列配列nameから探す
int search(char name[][64], int n, char *key) {
    int i, j, tmp;
    // 検索対象の名前と文字配列nameを比較
    for (i = 0; i < n; i++) {
        tmp = 0;
        for (j = 0; name[i][j] != '\0' && key[j] != '\0'; j++) {
            if (name[i][j] != key[j]) {
                tmp++;
                break;
            }
        }
        // tmpが0のままの場合、その番号を返す
        if (tmp == 0) {
            return i;
            break;
        } else if (i == n - 1) {
            // tmpが0ではなくかつiがn-1の場合見つからなかったとして-1を返す
            return -1;
        }
    }
}

// 検索の結果の表示
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
    char key_name[64], quit_key[5] = "quit";

    // input関数を用いて名前の入力
    input(name, 5);

    while (1) {
        // 検索する名前の入力
        printf("検索する名前を入力→");
        scanf("%s", key_name);

        // 入力された文字列がquitではないかの判別
        tmp = 0;
        for (i = 0; i < 5; i++) {
            if (key_name[i] != quit_key[i]) {
                tmp++;
                break;
            }
        }
        // quitではなかったらsearch関数とshow関数の実行
        if (tmp == 1) {
            show(name, 5, search(name, 5, key_name));
        } else {
            // quitの場合はループを抜け終了する
            printf("終了します\n");
            break;
        }
    }

    return 0;
}