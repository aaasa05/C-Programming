#include<stdio.h>
void main()
{
    int i,sum=0;
    FILE *ptr;
    ptr=fopen("output3.txt","w");

    for(i=1;i<=5;i++)
    {

        if(i==1)
        {
            sum=sum+i;
            fprintf(ptr,"\n1 ");
        }
        else
        {
            sum=sum+i;
            fprintf(ptr,"%d ",i);

        }
        if(i<5)
        {
            fprintf(ptr,"+ ");
        }

    }
    fprintf(ptr,"= %d ",sum);
}
