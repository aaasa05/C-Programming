#include<stdio.h>
int main(){

int i,j;
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

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      printf("%d ",a[i][j]);
    }

}
printf("\n");
for(i=0;i<3;i++){
    for(j=0;j<2;j++){
      printf("%d ",b[i][j]);
    }

}


return 0;
}
