#include<stdio.h>
int main()
{
    char arry[50];
    double a,b,result,total;
    scanf("%s",&arry);
    scanf("%lf%lf",&a,&b);
    result = (15 * b) / 100;
    total = result + a;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
