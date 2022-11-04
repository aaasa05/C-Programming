/**menu based tempetature conversion**/

#include<stdio.h>
void main()
{
  int choice;
  float temp,convertedtemp;
  printf("1. celcius to fahrenheit: \n ");
  printf("2. fahrenheit to celcius:\n ");
  printf("enter your choice:\n ");
  scanf("%d",&choice);

  switch(choice)
  {
  case 1:
    {
        printf("enter the celcius temperature:\n ");
        scanf("%f",&temp);
        convertedtemp=(temp*1.8)+32;
        printf("the temperature in fahrenheit is:%f\n ",convertedtemp);
        break;
    }
  case 2:
  {
      printf("enetr the fahrenheit temperature:\n");
      scanf("%f",&temp);
      convertedtemp=(temp-32)/1.8;
      printf("the temperature in celcius is:%f\n",convertedtemp);
      break;
  }
  default:
    {
        printf("not correct option");
        break;
    }


}

}
