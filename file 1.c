#include<stdio.h>
int main()
{
    int a,b;
    FILE *p;
    p=fopen("newfile.txt","w");
    scanf("%d%d",&a,&b);
    fprintf(p,"%d %d",a,b);
    return 0;
}
