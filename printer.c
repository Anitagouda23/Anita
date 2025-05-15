#include <stdio.h>
int main(){
int x=5;
int*ptr=&x;
printf("enter the value:%d\n",x);
*ptr=10;
printf("new value %d",x);
}
 
