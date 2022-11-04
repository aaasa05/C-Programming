#include<stdio.h>
int main(){
int i,j,n;
int arry[2][3];
int arry1[2][2];
//scanf("%d%d",&m,&n);
for(i=0;i<2;i++){
    for(j=0;j<3;j++){
            scanf("%d",&arry[i][j]);

    }
}

for(i=0;i<2;i++){
    for(j=0;j<3;j++){
            printf("%d ",arry[i][j]);

    }
}

printf("\n");

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&arry1[i][j]);
        printf("%d ",arry1[i][j]);
    }
}

return 0;
}
