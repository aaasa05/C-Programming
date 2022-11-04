#include<stdio.h>

void main()
{
    int input = 0;
    int sumofnumber = 0;

    scanf("%d",&input);

    for(int i=1;i<=input/2;i++){
        if(input%i == 0){
            sumofnumber += i;
        }
    }
    if(input == sumofnumber) {
        printf("It is perfect number \n");
    } else {
        printf("It is not perfect number \n");
    }

}
