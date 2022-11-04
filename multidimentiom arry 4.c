
#include<stdio.h>
int main(){

int i,j,sum=0,sum1 = 0,total=0,sum2=0;
int a[2][2];
int b[3][2];

a[0][0]=3;
a[0][1]=2;
a[1][0]=1;
a[1][1]=5;

b[0][0]=2;
b[0][1]=0;
b[1][0]=4;
b[1][1]=4;
b[2][0]=9;
b[2][1]=10;

for(i=0;i<1;i++){
    for(j=0;j<2;j++){
        sum += a[i][j];
    }
}
printf("%d\n",sum);

for(i=2;i<3;i++){
    for(j=0;j<2;j++){
        sum1 += b[i][j];
    }
}
printf("%d\n",sum1);



for(i=1;i<2;i++){
    for(j=0;j<2;j++){
        sum2 += a[i][j];
    }
}
printf("%d\n",sum2);

total = (sum+sum1)*sum2;
printf("%d ",total);

return 0;
}
