#include<stdio.h>

int main()
{
    int a =8;
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        for(int k=0;k<a;k++){
            printf(" ");
        }
        a = a-2;
        for(int l=0;l<i;l++){
            printf("*");
        }
        printf("\n");
    }
    a=0;
    for(int i=0;i<5;i++){
        for(int j=4;j>i;j--){
            printf("*");
        }
        for(int k=a;k>0;k--){
            printf(" ");
        }
        a = a+2;
        for(int l=4;l>i;l--){
            printf("*");
        }
        printf("\n");
    }
}
