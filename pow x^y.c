#include<stdio.h>
#include<math.h>
int main()
{
    double x,y;
    scanf("%lf%lf",&x,&y);
    double result = pow(x,y);
    printf("%.2lf",result);
    return 0;
}
