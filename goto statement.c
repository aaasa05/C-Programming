#include<stdio.h>
void main()
{
    int i=1;
    asa:   //lebel
        printf("%d\n",i);
        i++;
        if(i<10)

            goto asa;//lebel is calling here
}

