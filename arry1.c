#include<stdio.h>
int main(){
    int sum=0;
int arry[5]={4,6,10,2,1};
for(int i=0;i<5;i++){
    sum = sum + arry[i];
    printf("%d ",arry[i]);
}
printf("\n sum = %d",sum);
printf(" \naverage is = %.2f",(float)sum/5);

return 0;
}
