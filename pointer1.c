#include <stdio.h>
int main() {
    int num=35;
    int*ptr;
    ptr=&num;
    printf("num is %d\n",num);
    printf("*ptr is %d\n",*ptr);
    
   return 0;
}
