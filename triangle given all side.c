//area of triangle given 3 sides
#include<stdio.h>
int main()
{
    double a,b,c,s,area;
    printf("enter 3 numbers: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    s=a+b+c/2;
    area=sqr((s*(s-a)*(s-b)*(s-c));
    printf("area=%.2lf",area);






    return 0;
}
