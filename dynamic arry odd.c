#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,sum=0,arry[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&arry[i]);


       if(arry[i]%2!=0)
       {
          printf("%d ",arry[i]);
       }

    }
    return 0;
}



