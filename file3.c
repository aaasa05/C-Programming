#include<stdio.h>
int main()
{
    int a;
    FILE *p,*q;
   //p=fopen("newfile3.txt","w");
   p=fopen("newfile3.txt","a");
     q=fopen("input4.txt","r");
     fscanf(q,"%d",&a);
     if(a%2==0)
     {
         fprintf(p,"\n%d is is even number",a);

     }
     else{
        fprintf(p,"\n%d is odd number",a);
     }
    return 0;
}
