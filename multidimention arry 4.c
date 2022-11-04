
//a[0][0]+a[0][1]=?
//b[2][0]+b[2][1]=?
//total=?using forloop

#include<stdio.h>
int main(){
int i,j,sum = 0;
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
        sum += b[i][j];
    }
}
printf("total = %d ",sum);

return 0;
}
