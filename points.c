#include <stdio.h>
int main() {
    char name[20];
    printf("enter the name: ");
    fgets(name,20,stdin);
     printf("your name is %s",name);
   return 0;
}
