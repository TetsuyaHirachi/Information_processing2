/*
課題番号：11
問題番号：5
作成年月日：2023/12/13
学籍番号：bp23083
氏名：平地哲也
*/
#include <stdio.h>
#include <stdlib.h>

//構造体の定義
struct station_info{
    char name[100];
    double latitude;
    double longitude;
};

//入力関数の定義
struct station_info input(void){
    struct station_info entry;

    printf( "駅名を入力→" );
    scanf( "%s", entry.name );
    printf( "北緯を入力→" );
    scanf( "%lf", &entry.latitude );
    printf( "東経を入力→" );
    scanf( "%lf", &entry.longitude );

    return entry;
}

//斜辺の二乗を返す関数
double calc(double lat_search,double lon_search,double lat_station,double lon_station){
    double distance;
    distance=(lat_search-lat_station)*(lat_search-lat_station)+(lon_search-lon_station)*(lon_search-lon_station);
    return distance;
}

int main(void){
    int i=0,j=0;
    int nearest_station=0;
    double distance,min_distance;
    double lat,lon;
    struct station_info stations[5];
    
    //駅名、所在地の入力
    while(i<5){
        stations[i]=input();
        i++;
    }

    while(j<3){

        //検索緯度経度の入力
        printf("北緯 東経を入力してください:");
        scanf("%lf %lf",&lat,&lon);

        min_distance=calc(lat,lon,stations[0].latitude,stations[0].longitude);

        //最短距離駅の検索
        for(i=0;i<5;i++){
            distance=calc(lat,lon,stations[i].latitude,stations[i].longitude);
            if(min_distance>distance){
                min_distance=distance;
                nearest_station=i;
            }
        }

        //検索結果の表示
        printf("%s ",stations[nearest_station].name);
        printf("北緯:%lf 東経:%lf\n",stations[nearest_station].latitude,stations[nearest_station].longitude);

        j++;

    }

    return 0;
}
