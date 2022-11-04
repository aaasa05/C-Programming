#include<stdio.h>

void main()
{
    int input =0;
    int reverse = 0;
    int temp =0;
    scanf("%d",&input);
    /** If input 314 **/
    while(input>0)
    {
        temp = input%10;
        reverse = temp + reverse*10;
        input = input/10;
        /********************
        temp = 314%10 =4;
        reverse = 4+0*10 =4;
        input = 314/10 =31;

        temp = 31%10=1;
        reverse = 1+4*10=41;
        input = 31/10=3;

        temp = 3%10=3;
        reverse = 3+41*10=413;
        input = 3/10=0;
        **********************/
    }
    printf("%d",reverse);
}
