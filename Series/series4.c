// 1*2 + 3*3 + 5*4 + 7*5 + 9*6 ..... n1*n2 = ?

#include<stdio.h>

void main()
{
    int a=1,b=2,n1=0,n2=0,sum=0;

    scanf("%d%d",&n1,&n2);

    for(a=1,b=2;a<=n1 && b<=n2;a=a+2,b=b+1) {
        sum += a*b;

    }
    printf("%d",sum);

}
