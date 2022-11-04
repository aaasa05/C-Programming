#include<stdio.h>
int main()
{
    int i,j,sum=5;
    FILE *p,*p1,*ptr;
    p = fopen("a2.txt","r");
    p1 = fopen("aa2.txt","r");

    ptr = fopen("as2.txt","w");

    fscanf(p,"%d",&i);
    fscanf(p1,"%d",&j);
    sum = sum+(i*j);
    fprintf(ptr,"%d",sum);
    return 0;
}

