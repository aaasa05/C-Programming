#include<stdio.h>
void main()
{
    int num,i=0;
    printf("enter any num: ");
    scanf("%d",&num);
    printf("List if even number:\n");

    aa:

    if(i%2==0)
    {
        printf("%d ",i);
    }

    i++;
    if(i<=num) {
      goto aa;
    }



}




