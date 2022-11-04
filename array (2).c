#include<stdio.h>

int main()
{
    int arr[5];
    int sum=0;
    /*
    arr[0]=2;
    arr[1]=3;
    arr[2]=5;
    arr[3]=8;
    arr[4]=10;
    */
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<5;i++){
        sum += arr[i];
        //printf("%d ",arr[i]);
    }

    printf("%d",sum);

    return 0;
}
