#include<stdio.h>
int main()
{
    int i,initialnum,finalnum,sum=0;
    scanf("%d%d",&initialnum,&finalnum);

    for(i=initialnum; i<=finalnum; i++)
    {
        sum = sum+i;
        if(i>initialnum && i<=finalnum)
        {
            printf("+");
        }

        printf("%d",i);
    }
    printf("=%d",sum);
    return 0;
}
