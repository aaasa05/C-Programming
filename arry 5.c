
#include<stdio.h>
int main(){
int i,n,arry[50];
scanf("%d",&n);

for(i=0;i<n;i++){
    scanf("%d",&arry[i]);
}
int min = arry[0];
for(i=1;i<n;i++){
        if(min>arry[i]){
            min = arry[i];
        }

}
printf("minimum = %d\n",min);



return 0;
}




