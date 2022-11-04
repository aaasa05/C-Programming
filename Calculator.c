#include<stdio.h>

void main(){
float a,b;
char c;

printf("Please select operation (+ - * / )\n");
scanf("%c",&c);

printf("Please Enter two number\n");

scanf("%f%f",&a,&b);

switch(c) {
    case '+':
        {
            printf("+ is %f\n",a+b);
            break;

        }
    case '-':
        {
            printf("- is %f\n",a-b);
            break;

        }
    case '*':
        {
            printf("* is %f\n",a*b);
            break;
        }
    case '/':
        {
            printf("\ is %f\n",a/b);
            break;
        }

}
}
