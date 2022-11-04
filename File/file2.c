#include<stdio.h>

void main() {
int a =2000;

FILE *ptr;

ptr = fopen("output2.txt","w");

//printf("%d",a);
fprintf(ptr,"%d",a);

}
