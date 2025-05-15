#include <stdio.h>
#include<string.h>
int main() {
  char ani[100];
  printf("enetr your name:");
  scanf("%s",&ani);
  printf("%s\n",ani);
  int length=strlen(ani);
  printf("length of your name:%d\n",length);
  strcpy(ani,"animm");
  printf("copied as:%s\n",ani);
  int campare=strcmp("annu","anusha");
  printf("comparision is:%d\n",campare);
  scanf(ani,"gouda");
  printf("%s",ani);
    }
