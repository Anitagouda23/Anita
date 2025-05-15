#include<stdio.h>
int main(){
    int a=6;
    int *b=&a;
    *b=*b+4;
    printf("a=%d\n",a);
    printf("*b=%d\n",*b);
    return 0;
}
