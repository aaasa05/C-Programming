#include<stdio.h>
void main()
{
    int a=200;

    FILE *fptr, *fptr2;
    fptr = fopen("input1.txt","r");//Scanf or Input Operation
    fptr2 = fopen("output1.txt","w");//Printf or Output Operation

    //fscanf(fptr,"%d",&a);
   // printf("%d",a);
   fprintf(fptr2,"%d",a);

}
