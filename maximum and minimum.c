//wap that read some numbers and take maximum

#include<stdio.h>
int main()
{
    int i,temp=0,a[5];


    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>temp)
        {
            temp = a[i];
        }
    }

    printf(" max = %d\n",temp);
}
