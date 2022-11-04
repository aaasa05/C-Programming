#include<stdio.h>
int main(){
int sum=0;
int arry[10];
for(int i=0;i<5;i++){
   scanf("%d",&arry[i]);
   sum = sum + arry[i];
printf("%d ",arry[i]);

}
printf("\n%d ",sum);
printf("\naverage = %.2f",(float)sum/5);

return 0;
}
