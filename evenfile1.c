//write a program to write all even num
//between 1 and 10 (dynamic)

#include<stdio.h>
int main()
{
    int i,n;
    FILE *p,*q;
    p=fopen("evenfile.txt","w");
    q=fopen("input5.txt","r");
    fscanf(q,"%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            fprintf(p,"\n%d even num",i);

        }
        else{
            fprintf(p,"\n%d odd num",i);
        }


    }
    return 0;

}
