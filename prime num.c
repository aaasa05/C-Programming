#include<stdio.h>
void main()
{
    int a =0;
    int flag=0;

    scanf("%d",&a);

    for(int i=2;i<a;i++){
        if(a%i==0){
            flag=1;
            break;
        }
    }

    if(flag == 1){
        printf("It is not a prime number\n");
    } else {
        printf("It is prime number \n");
    }






}
