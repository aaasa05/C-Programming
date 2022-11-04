#include<stdio.h>
void main()
{
    int i;
    FILE *p,*f;
    p=fopen("even1.txt","w");
    f=fopen("input3.txt","r");
    while(!feof(f))


    {
        fscanf(f,"%d",&i);
        if(i%2==0)
        fprintf(p,"%d is even num\n",i);
        fprintf(p,"%d is odd num\n",i);
    }
    fprintf(p,"hello world\n",i);
}
