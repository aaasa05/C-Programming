#include<stdio.h>
    int main(){
    int i=0;
    printf("the even num is:");
    for(int i=0;i<=100;i++){
    if(i%2==0)
        printf("%d ",i);
    }
    printf("n\n");
    printf("the odd num is:");
    for(int i=0;i<=100;i++){
        if(i%2!=0)
        printf("%d ",i);
    }


    return 0;
    }
