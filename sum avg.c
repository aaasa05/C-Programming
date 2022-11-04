#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("enter 3 numbers: \n");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    avg=(float)sum/3;//type casting
    printf("sum=%d\n",sum);
    printf("average=%.2f",avg);




    return 0;
}
