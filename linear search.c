//searching a number arry(linear search)

#include<stdio.h>
int main()
{
    int i,arry[6]={5,22,5,0,6,5};
    int value = 22;
    int pos = -1;
    for(i=0;i<6;i++)
    {
        if(value==arry[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("not found");
    }
    else
    {
        printf("position = %d\n",pos);
    }
}
