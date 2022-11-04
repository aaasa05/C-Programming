#include<stdio.h>

int sum(int d, int e){
    int total =0;
    total = d + e;
    return total;
}

void main()
{
int a = 10;
int b = 20;
int c =0;

c = a;
a = b;
b = c;

printf("a=%d,b=%d",a,b);


/*
int a=0,b=0,c=0;
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("%d",c);
*/
}


