#include<stdio.h>
#include<math.h>
int main(){
    int i,num,isprime=1;
    printf("enter a number:");
    scanf("%d",&num);
    if(num<=1){
        printf("enter a number from 2");
    }
    int limit=sqrt(num);
    for(i=2; i<=limit/2; i++){
        if(limit%2==0){
            isprime=0;
    }
    }
    if(isprime==0){
            printf("it is a not prime number:");
        }
    else{
        printf("it is a prime number:");
        
    }
}
