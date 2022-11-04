#include<stdio.h>
int main(){

int n,sum=0,i;
scanf("%d",&n);
int num[n];
for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    if(num[i]%2!=0){
            printf("%d ",num[i]);
        sum += num[i];
    }

}
printf("\nodd = %d ",sum);



return 0;
}
