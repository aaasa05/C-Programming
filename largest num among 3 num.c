//wap to find the largest num among 3 numbers.user provide input from terminal.

#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%f is largest",a);

    }
    else if(b>a && b>c)
    {
        printf("%f is largest",b);
    }
    else
    {
       printf("%f is largest",c);
    }

    return 0;
}
