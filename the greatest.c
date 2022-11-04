#include<stdio.h>
int main()
{
    int a,b,s,AB;
    scanf("%d%d%d",&a,&b,&s);
   /* maior */AB = (a + b + (a*b*s)*(a - b)) / 2;
    printf("%d eh o maior\n",AB);
    return 0;
}
