#include<stdio.h>
int main(){

   int id=500;
   int password=000;
   printf("please enter your id:\n");
   scanf("%d",&id);
   switch(id){
       case 500:
           printf("enter your password:\n");
           scanf("%d",&password);
   switch(password){
       case 000:
           printf("welcome dear programmer:\n");
           break;
       default:
           printf("incorrect password");
           break;
                  }
break;
  default:
      printf("incorrect id");
      break;

           }

  return 0;
        }
