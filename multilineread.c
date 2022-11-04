#include<stdio.h>
int main()
{
 int i;
    FILE *f,*f1;

    f=fopen("evenfile2.txt","r");
    f1=fopen("output2.txt","w");

    while (!feof(f))
    {
        fscanf(f,"%d",&i);
        if(i%2==0){

              fprintf(f1,"%d even\n",i);
        }
           else{
        fprintf(f1,"%d odd\n",i);
        }


    }
    return 0;
}
