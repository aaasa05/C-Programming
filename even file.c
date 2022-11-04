#include<stdio.h>
void main()
{
    int i,n;
    FILE *p,*f;
    p=fopen("even.txt","w");
    f=fopen("input0.txt","r");
    fscanf(f,"%d",&n);
    for(i=1;i<n;i++)
    {
        if(i%2==0)
        fprintf(p,"%d is even num\n",i);
    }
    fprintf(p,"hello world\n",i);
}
