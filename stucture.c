#include <stdio.h>
struct book{
 char name[50] ;
 char writer_name[40];
 int price;
    };
    struct book b;
int main() {
 
 printf("enter book name:\n");
 scanf("%s",&b.name);
printf("enter a writer name:\n");
scanf("%s",&b.writer_name);
printf("enter a price:\n");
scanf("%d",&b.price);
printf("name:%s\n writer name:%s\n price:%d", b. name,b.writer_name,b.price);
}
