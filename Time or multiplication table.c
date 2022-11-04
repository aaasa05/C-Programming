/**
enter any number=3
num x i = num*i
3 x 1 = 3
3 x 2 = 6
.........
3 x 10 = 30
**/

#include<stdio.h>
void main()
{
    while(1)
    {
        int num,i;
        printf("enter any number: ");
        scanf("%d",&num);
        for(i=1; i<=10; i++)
        {
            printf("%d X %d = %d\n",num,i,num*i);
        }

    }

}
