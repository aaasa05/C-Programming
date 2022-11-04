#include<stdio.h>
void main()
{
    int i=1,sum=0;
    asa:
    if(i%2!=0){
      //printf("%d\n",i);
      sum+=i;
    }

    i++;
    if(i<20)
    {
        goto asa;
    }
    printf("sum=%d\n",sum);

}
