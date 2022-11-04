#include<stdio.h>

void main(){
    int arr1[] = {41,12,43,54,65,99};
    int sum = 0;
    //printf("%d",arr1[3]);

    for(int i=0;i<6;i++){
            sum += arr1[i];
        //printf("%d ",arr1[i]);
    }
    printf("%d",sum);
}
