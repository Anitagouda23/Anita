#include <stdio.h>
#include<string.h>
int main() {
    char str[155];
    printf("enter a string name: ");
    fgets(str,sizeof(str),stdin);
    str[strcmp(str,"\n")]='\0';
    
    printf("length of the string:%lu\n",strlen(str));
   return 0;
}
