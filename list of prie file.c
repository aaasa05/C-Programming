#include<stdio.h>
void main()
{
    int i,n,flag=0;
    FILE *ptr;
    ptr=fopen("output6.txt","w");

    fprintf(ptr,"list of prime num: ");
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
            fprintf(ptr,"prime");
        }
        else
        {
            fprintf(ptr,"not prime");
        }

}
