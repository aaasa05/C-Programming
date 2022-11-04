#include<stdio.h>
int main()
{
    int i,num;
    scanf("%d",&num);

    for(i=1; i<=num; i=i+2)
    {
        if(i>1 && i<=num)
        {
            printf(",");
        }
        printf("%d",i);

    }


    return 0;
}
