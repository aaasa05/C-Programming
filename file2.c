#include<stdio.h>
int main()
{
    int a;
    FILE *p,*q;
    p=fopen("newfile2.txt","w");
    q=fopen("input2.txt","r");
    fscanf(q,"%d",&a);
    fprintf(p,"%d",a);
    return 0;
}
