//break and continue statement

#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<20;i++)
    {
        if(i%4==0)
            continue;//bypass
        printf("%d\n",i);
        if(i==15)
            break;// loop terminate
    }
}
