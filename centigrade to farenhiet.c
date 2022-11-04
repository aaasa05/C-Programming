//conversion between centigrade to farenhiet
#include<stdio.h>
int main()
{
    float c,f;
    printf("enter any centi num: ");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("farenhiet=%.2f",f);
}
