/*
課題番号：10
問題番号：9
作成年月日：2023/12/5
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
void input(char name[][64], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d番目の名前を入力:", i);
        scanf("%s", name[i]);
    }
}

int search(char name[][64], int n, char *key) {
    int i, j, tmp;
    for (i = 0; i < n; i++) {
        tmp = 0;
        for (j = 0; name[i][j] != '\0' && key[j] != '\0'; j++) {
            if (name[i][j] != key[j]) {
                tmp++;
                break;
            }
        }
        if (tmp == 0) {
            return i;
            break;
        }
        if (i == n - 1 && tmp == 1) {
            return -1;
        }
    }
}

void show(char name[][64], int n, int key) {
    if (key == -1) {
        printf("見つかりません\n");
    } else {
        printf("%sは%d番目に格納されています。\n", name[key], key);
    }
}

int main(void) {
    int i, tmp;
    char name[5][64];
    char key_name[64], quit_key[5] = "quit";

    input(name, 5);

    while (1) {
        printf("検索する名前を入力→");
        scanf("%s", key_name);
        tmp = 0;
        for (i = 0; i < 5; i++) {
            if (key_name[i] != quit_key[i]) {
                tmp++;
                break;
            }
        }
        if (tmp == 1) {
            show(name, 5, search(name, 5, key_name));
        } else {
            printf("終了します\n");
            break;
        }
    }

    return 0;
}