#include <stdio.h>
#include<string.h>
int main() {
    char str1[15],str2[20];
    printf("enter a string name: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcmp(str1,"\n")]='\0';
    strcpy(str2,str1);
    printf("copied string:%s\n",str2);
   return 0;
}
