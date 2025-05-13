#include<stdio.h>
int main()
{ 
    int a,b,sum,different,product,qution;
    printf("enter the value for a");
    scanf("%d",&a);
    printf("enter the value for b");
    scanf("%d",&b);
    sum=a+b;
    different=a-b;
    product=a*b;
    qution=a/b;
    printf("%d\n%d\n%d\n%d\n",sum,different,product,qution);
   return 0;
}

