#include<stdio.h>
#include<math.h>
int main()
{
    int num,remainder,original,result=0;
     printf("enter the number");
     scanf("%d",&num);
     original=num;
     while(num!=0){
         remainder=num%10;
         result=result+remainder*remainder*remainder;
         num=num/10;
     }
     if(result==original){
         printf("%d is an armstrong number");
     }
     else{
         printf("%d is not an armstrong number");
     }
}
