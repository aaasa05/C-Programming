#include<stdio.h>
void main()
{
    double a,b;
    char ch;

    printf("enter an operator(+,-,*,/):\n");
    scanf("%c",&ch);
    printf("enter two numbers :\n");
    scanf("%lf %lf",&a,&b);

    switch(ch)
    {
    case '+':
        printf("+ is %lf\n",a+b);
        break;
    case '-':
        printf("- is %lf\n",a-b);
        break;
    case '*' :
        printf("* is %lf\n",a*b);
        break;
    case '/':
        printf("/ is %lf\n",a/b);
        break;
    default:
        printf("not a operator");
        break;



    }

}
