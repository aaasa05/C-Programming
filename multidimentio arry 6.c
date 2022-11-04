//  (a[0][j] + b[2][j])*a[1][j]   using forloop

#include<stdio.h>
int main(){
int i,j,sum=0,sum1=0,sum2=0,total=0;
int a[2][2];
int b[3][2];

a[0][0] = 1;
a[0][1] = 3;
a[1][0] = 2;
a[1][1] = 3;

b[0][0] = 5;
b[0][1] = 2;
b[1][0] = 1;
b[1][1] = 3;
b[2][0] = 4;
b[2][1] = 0;

for(i=0;i<1;i++){
    for(j=0;j<2;j++){
        sum += a[i][j];
    }
}
printf("%d ",sum);
printf("\n");

for(i=2;i<3;i++){
    for(j=0;j<2;j++){
        sum1 += b[i][j];
    }
}
printf("%d ",sum1);
printf("\n");

for(i=1;i<2;i++){
    for(j=0;j<2;j++){
        sum2 += a[i][j];
    }
}
printf("%d ",sum2);
printf("\n");

total = (sum+sum1)*sum2;
printf("total = %d ",total);

return 0;
}
