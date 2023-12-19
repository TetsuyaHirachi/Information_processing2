/*
quiz
作成年月日：2023/12/19
学籍番号：bp23083
氏名：平地哲也
*/

//参考例としてあげられていた気象データを用いてます

#include <stdio.h>
#include <stdlib.h>

typedef struct weather {
    int y,m,d;
    double average,max,min;
} WEATHER;

int main(void){
    WEATHER array[365];
    int i=0;
    FILE *file;
    if((file=fopen("weather.txt","r"))==NULL){
        printf("ファイルが開けません\n");
        exit(1);
    }

    for(i=0;i<365;i++){
        fscanf(file,"%d %d %d %lf %lf %lf",&(array[i].y),&(array[i].m),&(array[i].d),&(array[i].average),&(array[i].max),&(array[i].min));
    }

    for(i=0;i<365;i++){
        printf("%d %d %d %.1lf %.1lf %.1lf\n",array[i].y,array[i].m,array[i].d,array[i].average,array[i].max,array[i].min);   
    }

    fclose(file);
    return 0;

}