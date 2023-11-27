#include <stdio.h>
int main(void){
    int a,b,c;
    printf("a,b,c:");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a<b+c&&b<a+c&&c<a+b){
        printf("triangle\n");
    }else{
        printf("NOT triangle\n");
    }
}