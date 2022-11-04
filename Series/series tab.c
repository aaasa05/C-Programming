#include<stdio.h>
void main()
{
    for(int i=50; i>=10; i--)
    {
        if(i%10==0)
        {
            printf("\n");
        }
        printf("%d\t",i);
    }

}
