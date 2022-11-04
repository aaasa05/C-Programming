#include<stdio.h>

int main()
{
    int a;
    float temp,convertedtemp;

    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("Enter your choice.\n")

    scanf("%d",&a);

    switch(a) {

        case 1:
            {
                printf("Enter the Fahrenheit Temperature\n");
                scanf("%f",&temp);
                convertedtemp = (temp-32)/1.8;
                printf("The temperature in Celsius is:%f\n",convertedtemp);
                break;
            }

        case 2:
            {
                printf("Enter the Celsius Temperature\n");
                scanf("%f",&temp);
                convertedtemp = (temp*1.8)+32;
                printf("The temperature in Fahrenheit is:%f\n",convertedtemp);
                break;
            }
        default:
            {
                printf("Not Correct Option\n");
                break;
            }

    }
    return 0;
}
