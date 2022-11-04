#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        //space print
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        //number print
      for(j=1;j<=i;j++)
      {
         // printf("%d",i);
         printf("%d",j);
      }
      printf("\n");
    }
    return 0;
}
