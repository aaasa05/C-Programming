#include<stdio.h>
void main()

{
    int row,col,n;
    printf("enter n: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            // printf("%c ",col+96);
            printf("%c ",col+64);
        }
        printf("\n");
    }
}
