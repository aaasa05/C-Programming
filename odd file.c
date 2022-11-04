#include<stdio.h>
void main()
{
    int i;
    FILE *p;
    p=fopen("output4.txt","w");

    fprintf(p,"odd num: \n");

    for(i=1; i<=100; i++)
    {

        if(i%2!=0)
        {

            fprintf(p,"%d ",i);
        }

    }
    fprintf(p,"\n");
    fprintf(p,"even num: \n");
    for(i=1;i<=100;i++)
    {
         if(i%2==0)
        {
            fprintf(p,"%d ",i);
        }
    }
}
