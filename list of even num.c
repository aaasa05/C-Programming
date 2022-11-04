#include<stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    for(i=2;i<=num;i=i+2)
    {
        if(i>2 && i<=num)
        {
            printf(",");
        }
        printf("%d",i);
    }
    return 0;
}
