#include<stdio.h>
void main()
{
    int i=1,sum=0;
    FILE *p;
    p = fopen("asha output.txt","w");
    for(i=1;i<=100;i++)
    {
        sum=sum+i;

    }
     fprintf(p,"%d ",sum);
}
