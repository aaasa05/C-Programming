//copy  all elements of an arry to another arry
#include<stdio.h>
int main()
{
    int i,n,arry[30]={2, 4 ,50, 0 ,5},arry2[5];

    for(i=0;i<5;i++)
    {

        //scanf("%d",&arry[i]);
        printf("%d ",arry[i]);

        if(i<4) {
            printf(",");
        }

    }
    printf("\n");
    for(i=0; i<5; i++)
    {
        arry2[i]=arry[i];
        printf("%d",arry2[i]);
        if(i<4) {
            printf(",");
        }

    }

}
