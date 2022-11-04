#include<stdio.h>
void main()
{
    int a,b;
    FILE *ptr,*p;
   // ptr = fopen("output.txt","w");
    ptr = fopen("output.txt","a");
    p = fopen("input.txt","r");

    fscanf(p,"%d%d",&a,&b);
    if(a%2==0){
        fprintf(ptr,"\n%d is even",a);
    }
    else{
    fprintf(ptr,"\n%d is odd",a);
    }

}
