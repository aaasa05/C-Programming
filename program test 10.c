#include<stdio.h>
int main(){
int a = 23;
int b = 45;
int c = a+b;
int d = 678;
int e = d-c;
int f = a*b;
float s = (float)d/(float)a;
printf("a+b=%d\n d-c=%d\n a*b=%d\n d/a=%f\n",c,e,f,s);
return 0;
}
