/*
課題番号：11
問題番号：5
作成年月日：2023/12/13
学籍番号：bp23083
氏名：平地哲也
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int m,n,i,j;
    int *p=NULL;
    int **array=NULL;

    //m,nの入力
    printf("m,n:");
    scanf("%d,%d",&m,&n);

    //m個分のポインタが入るメモリを確保しarrayに先頭アドレスをいれ、確保できたか判定する
    array=(int **)malloc(sizeof(int *)*m);
    if(array==NULL)printf("エラー\n");

    //int型n個分のメモリを確保しarrayにそれぞれ先頭アドレスをいる
    for(i=0;i<m;i++){
        array[i]=(int *)malloc(sizeof(int)*n);
	    if(array[i]!=NULL){
	        for(j=0;j<n;j++){
                //0ですべて初期化する
                array[i][j]=0;
            }
        }else printf("エラー");
    }

    //メモリ解法をする
    for(i=0;i<m;i++){
        free(array[i]);
    }
    free(array);

    return 0;
}
