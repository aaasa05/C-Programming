

#include<stdio.h>
int main(){
int i,j,x,y,z,x1,y1,z1,x2,y2,z2,total=0;
int a[3][3];
int b[3][3];
printf("enter a: ");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    scanf("%d",&a[i][j]);
    }
}
printf("enter b: ");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    scanf("%d",&b[i][j]);
    }
}

x = a[0][0] * b[0][0];
y = a[0][1] * b[1][0];
z = a[0][2] * b[2][0];

x1 = a[1][0] * b[0][1];
y1 = a[1][1] * b[1][1];
z1 = a[1][2] * b[2][1];

x2 = a[2][0] * b[0][2];
y2 = a[2][1] * b[1][2];
z2 = a[2][2] * b[2][2];

total =( x + y + z )+( x1 + y1 + z1 )+ (x2 + y2 + z2);

printf("total = %d ",total);




return 0;
}
