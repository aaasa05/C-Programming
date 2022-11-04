#include<stdio.h>

int main(){
int x = 10;
printf("x=%d\n",++x);//10
printf("x=%d\n",++x);//12
printf("x=%d\n",x);//12
printf("x=%d\n",x--);//12
//printf("x=%d\n",x);//11
printf("x=%d\n",--x);//10
}
