#include<stdio.h>
void main()
{
    int a,flag=0;
    //scanf("%d",&a);
    a = 100;

    for(int i=1;i<a;i++)
    {
        flag = 0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
             flag=1;
             break;
            }

        }
        if(flag == 0) {
            printf("%d ",i);
        }


    }
    /*
     if(flag==0)
     {
         printf("num is prime");

     }
     else
         {
             printf("num is not prime");
         }
         */
}





