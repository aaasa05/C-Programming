#include<stdio.h>
// Sum of series 1+2+4+6+4 = ?
int main(){
    int arr[5],sum=0;

    for(int i=0;i<5;i++) {
        scanf("%d",&arr[i]);
        sum += arr[i];

    }
    for(int i=0;i<5;i++) {

        printf("%d ",arr[i]);
        if(i<4) {
            printf("+");
        }
    }
    printf("=%d",sum);

    return 0;
}
