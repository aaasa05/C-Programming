#include<stdio.h>
void main()
{
 int  a,b,c;
printf("show the largest number");
 scanf("%d %d %d",&a,&b,&c) ;
 if((a>b)&&(a>c)){
    printf("a is largest");
 }
else if(b>a && b>c){
    printf("b is largest");
}

else if(c>a && c>b){
    printf("c is largest");
}
else{
  printf("invalid");
}
}
