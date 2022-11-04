#include<stdio.h>
int main()
{
    int i,j,sum=5;
    FILE *p,*ptr;
    p = fopen("aa2.txt","r");

    ptr = fopen("asa2.txt","w");
    fscanf(p,"%d%d",&i,&j);
    sum = sum+(i*j);
    fprintf(ptr,"%d",sum);
    return 0;
}
