#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    while(i<=100){
        printf("%d ",i);
        i++;
    }
    printf("\n\n");
    scanf("%d",&i);
    while(i<=100){
        if(i%2==0)
            printf("%d ",i);
        i++;
    }
    printf("\n\n");
    scanf("%d",&i);
    while(i<=50){
        if(i%2==1)
         printf("%d ",i);
        i++;
    }

    return 0;
    }
