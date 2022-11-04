#include<stdio.h>
int main(){
int a=0;
int b=0;
int c=0;
float d=0;
double e=0;
//char s='0';
char s=0;
//scanf("%d %d %d %f %lf %c",&a,&b,&c,&d,&e,&s);
scanf("%d %d %f %lf %c",&a,&b,&d,&e,&s);
c=a-b;

printf("a=%d\n b=%d\n c=%d\n d=%f\n e=%lf\n s=%c\n",a,b,c,d,e,s);

return 0;
}
