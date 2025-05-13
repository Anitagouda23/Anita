
#include <stdio.h>
int main() 
{
    int a,b;
    char op;
 printf("enter the value of a,op and b");
  scanf("%d%c%d",&a,&op,&b);
  switch(op)
  {
  case '+': printf("%d", a+b); 
             break;
   case'-': printf("%d", a-b);
              break;
   case'*': printf("%d", a*b);
              break;
   case'/': printf("%d", a/b);
              break;
   default:printf("invalid operation");
  }
}
