#include <stdio.h>
int main() {
    int i,num,isprime=1;
   printf("enter the number:");
scanf("%d",&num);
 for(i=2;i<=num/2; i++){
     if(num%2==0){
          printf("it is not prime number");
     }
  else{
     printf("it is prime number");
 }
}  
}
