#include<stdio.h>
void main()
{
    int c;
    float temp,convertedtemp;

    printf("1. celcius to fahrenheit\n");
    printf("2. fahrenheit to celcius\n");
    printf("enter your choice\n");
    scanf("%d",&c);

    switch(c)
    {
    case 1:
    {
        printf("enter celcius temperature\n");
        scanf("%f",&temp);
        convertedtemp =(temp*1.8)+32;
        printf("the temperature in fahrenheit is:%f\n",convertedtemp);
        break;
    }
    case 2:
    {
        printf("enter fahrenheit temperature\n");
        scanf("%f",&temp);
        convertedtemp=(temp-32)/1.8;
        printf("the temperature in celcius is:%f\n",convertedtemp);
        break;
    }
    default:
    {
        printf("not a correct option");
    }

    }

}

