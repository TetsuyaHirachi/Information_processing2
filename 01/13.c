#include <stdio.h>
int main(void){
    int i,j,k;
    for(i=1;i<=100;i++){
        for(j=1;j<=100;j++){
            for(k=1;k<=100;k++){
                if(i*i+j*j==k*k){
                    printf("i=%d,j=%d,k=%d\n",i,j,k);
                }
            }
        }
    }
}