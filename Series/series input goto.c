//wap to print series of given input(1 to n)_using goto statement
#include<stdio.h>
void main()
{
  int i,num;
  printf("enter any number: ");
  scanf("%d",&num);
  input :

        printf("%d\t",i);
        i++;

        if(i<=num)
        {
            goto input;
        }

}
