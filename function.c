#include<stdio.h>
int Anita(int a,int b)      //function declaration
{
 int c=a+b;                 //function definition
 return c;
}
int main()
{
int result=Anita(5,6);       //function calling
 printf("result is:%d",result);
return 0;
}   
