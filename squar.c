#include<stdio.h>
void main()
{

    for(int i=1;i<=10;i++)
    {

        for(int j=10;j>i;j--)
        {
           printf(" ");
        }
        for(int j=1;j<=i;j++)
         {
           printf(" * ");
         }
          printf("\n");
        }



    for(int i=9;i>0;i--)
    {
        for(int j=10;j>i;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
   }

}




