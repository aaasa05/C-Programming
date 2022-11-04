#include<stdio.h>
int main(){
int i,j,n,n1;

scanf("%d%d",&n,&n1);


for(i=1;i<n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=2;j<=i;j++){
            printf("**");
        }

        for(j=1;j<=n-i;j++){
            printf("  ");
        }
        for(j=2;j<=i;j++){
            printf("**");
        }



 printf("\n");
}


for(i=n1-1;i>=1;i--){
    for(j=1;j<=n1-i;j++){
        printf(" ");
    }
    for(j=1;j<=i;j++){
        printf("*");
    }
    for(j=i-1;j>=1;j--){
        printf("*");
    }

    printf("\n");
}

/*for(i=n1;i>=1;i=i-2){
    for(j=1;j<=n1-i;j++){
            printf(" ");

    }
    for(j=1;j<=i;j++){
        printf("* ");
    }

    printf("\n");
}*/











return 0;
}

