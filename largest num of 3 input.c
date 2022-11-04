#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is largest\n");
    }
    else if(b>a && b>c)
    {
        printf("%d is largest\n");
    }
    else if(c>a && c>b)
    {
        printf("%d is largest\n");
    }
    else
    {
        printf("All are equal");
    }
    return 0;
}
