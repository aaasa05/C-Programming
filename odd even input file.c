
#include<stdio.h>
void main()
{
    int i,n;
    FILE *p;
    //FILE *m;
    p=fopen("output5.txt","w");
   // m=fopen("input5.txt","r");

    fprintf(p,"odd num: \n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {

        if(i%2!=0)
        {

            fprintf(p,"%d ",i);
        }

    }
    fprintf(p,"\n");
    fprintf(p,"even num: \n");

    for(i=1;i<=n;i++)
    {
         if(i%2==0)
        {
            fprintf(p,"%d ",i);
        }
    }
}
