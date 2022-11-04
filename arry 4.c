#include<stdio.h>
int main(){
int i,n,arry[50];
scanf("%d",&n);

for(i=0;i<n;i++){
    scanf("%d",&arry[i]);
}
int max = arry[0];
for(i=1;i<n;i++){
        if(max<arry[i]){
            max = arry[i];
        }

}
printf("max = %d\n",max);



return 0;
}
