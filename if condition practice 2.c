#include<stdio.h>
int main(){
int carspeed  = 0;
printf("please show largest speed");
scanf("%d",&carspeed);
if(carspeed>100){
 printf("it is overspeed");
}
else if(carspeed>=70 && carspeed<=99){
    printf("it is fastspeed");
}
else if(carspeed>=50 && carspeed<=69){
    printf("it is normalspeed");
}
else if((carspeed>0)&&(carspeed<=49)){
printf("it is lowspeed")  ;
}
else  {
    printf("invalid");
}
return 0;
}
