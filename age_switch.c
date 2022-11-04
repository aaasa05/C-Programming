#include<stdio.h>

int main()
{
    int age=0;
    scanf("%d",&age);

    switch(age){
    case 10:
        printf("Infant\n");
        break;
    case 20:
        printf("Teenage\n");
        break;
    case 50:
        printf("Youth\n");
        break;
    case 90:
        printf("Old\n");
        break;
    default :
        printf("Incorrect\n");
        break;

    }


    return 0;
}
