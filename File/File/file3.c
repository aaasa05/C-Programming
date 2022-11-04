#include<stdio.h>
void main()
{
    int a,b=200,sum;

    FILE *fptr, *fptr2;
    fptr = fopen("input1.txt","r");//Scanf or Input Operation
    fptr2 = fopen("output1.txt","w");//Printf or Output Operation

    fscanf(fptr,"%d",&a);
    sum = a+b;
    fprintf(fptr2,"%d",sum);

}
