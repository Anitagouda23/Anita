#include <stdio.h>
struct employee {
    char name[50];
    int id;
    float salary;};
int main() {
    struct employee employees[5]; 
    printf("enter information for 5 emloyees:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
       printf("ID: ");
        scanf(" %d", &employees[i].id); 
        printf("Name: ");
        scanf("%[^\n]", &employees[i].name);
       printf("salary: ");
        scanf("%f", &employees[i].salary);
    }
 return 0;
}
