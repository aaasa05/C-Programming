#include<stdio.h>
void main()
{
    double a,b;

    char op;
    printf("enter an operator(+,-,*,/): " );
    scanf("%c",&op);
    printf("enter two numbers: ");
    scanf("%lf %lf",&a,&b);

    switch(op)
    {

    case '+':
    {
        printf(" + is %lf\n",a+b);
        break;
    }
    case'-':
    {
        printf(" - is %lf\n",a-b);
        break;
    }
    case'*':
    {
        printf(" * is %lf\n",a*b);
        break;
    }
    case'/':
    {
        printf(" / is %lf\n",a/b);
        break;
    }
    /*default:
    {
        printf("not a valid operation\n");
        break;
    */

}
}
