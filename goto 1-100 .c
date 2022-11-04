#include<stdio.h>
void main()
{
    int i=1;
    zawad:
        {
            printf("%d\n",i);
            i++;
        }
        if(i<=100)
        {
            goto zawad;
        }
}
