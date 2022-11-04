#include<stdio.h>
void main()
{
    double r,result;
    scanf("%lf",&r);
    result = (4.0 / 3) * 3.14159 * r*r*r;
    printf("VOLUME = %.3lf\n",result);
    return 0;
}
