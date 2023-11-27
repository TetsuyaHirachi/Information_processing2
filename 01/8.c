#include <stdio.h>
int main(void){
    int a,b,i,sum;
    printf("a,b:");
    scanf("%d,%d",&a,&b);
    sum=0;
    for(i=0;i<b;i++){
        sum+=a;
    }
    printf("%d",sum);
}