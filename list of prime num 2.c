#include<stdio.h>

int main() {
    int i = 0, flag=0;
    //scanf("%d",&i);
    for(i = 1;i<100;i++) {
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

}
