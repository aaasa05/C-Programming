#include<stdio.h>
int main(){
    int i,a;

    scanf("%d",&i);
    i=a;
    while(i<=100){
        if(i%2==0)
            printf("%d ",i);
        i++;
    }
    printf("\n\n");
    i=a;
    while(i<=50){
        if(i%2==1)
            printf("%d ",i);
        i++;
    }
    return 0;
}
