
#include<stdio.h>
void main()
{
    int i,n,flag=0;
    FILE *ptr;
    ptr=fopen("output7.txt","w");


    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }

    }
    if(flag==0)
        {
            fprintf(ptr,"prime\n");
        }
        else
        {
            fprintf(ptr,"not prime\n");
        }
        printf("\n");
     fprintf(ptr,"list of prime num: ");

     for(i=2;i<n;i++)
     {
         if(i%2==1)
       fprintf(ptr,"%d ",i);
     }

}
