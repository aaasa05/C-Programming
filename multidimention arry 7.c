////  (a[0][j] + b[1][j])* b[2][j] - a[2][j]   using forloop and scanf

#include<stdio.h>
int main(){
int i,j,sum=0,sum1=0,sum2=0,sum3=0,total=0;
int a[3][2];
int b[3][2];
printf("enter a: ");
for(i=0;i<3;i++){
    for(j=0;j<2;j++){
    scanf("%d",&a[i][j]);
    }
}
printf("enter b: ");
for(i=0;i<3;i++){
    for(j=0;j<2;j++){
    scanf("%d",&b[i][j]);
    }
}

for(i=0;i<1;i++){
    for(j=0;j<2;j++){
        sum += a[i][j];
    }
}
printf("%d ",sum);
printf("\n");

for(i=1;i<2;i++){
    for(j=0;j<2;j++){
        sum1 += b[i][j];
    }
}
printf("%d ",sum1);
printf("\n");

for(i=2;i<3;i++){
    for(j=0;j<2;j++){
        sum2 += b[i][j];
    }
}
printf("%d ",sum2);
printf("\n");

for(i=2;i<3;i++){
    for(j=0;j<2;j++){
        sum3 += a[i][j];
    }
}
printf("%d ",sum3);
printf("\n");

total = (sum + sum1) * sum2 - sum3;
printf("total = %d ",total);

return 0;
}
