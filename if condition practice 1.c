#include<stdio.h>
int main()
{
int age=0;
printf("please type your age?");
scanf("%d",&age);
if(age>=0 && age<=10){
printf("he is infant");
}
else if(age>=11 && age<=20){
printf("he is teenager");
}
else if(age>=21 && age<=50){
 printf("he is youth");
}
else if(age>50){
printf("he is old");
}
else {
printf("incorrect information");
}
    return 0;
}
