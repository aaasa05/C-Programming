#include<stdio.h>
int main()
{
    float a,b,c,r,tri,cir,tra,squ,rec;
    scanf("%f%f%f",&a,&b,&c);
    tri = 0.5 * a * c;
    cir = 3.14159 * r*r;
    tra = ((a+b)/2) * c;
    squ = b * b;
    rec = a * b;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRECTANGULO: %.3f\n",tri,cir,tra,squ,rec);
    return 0;
}
