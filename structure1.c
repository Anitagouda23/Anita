#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float mark;};
int main() {
    struct student s;
   printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin); 
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.mark);
     printf("\nStudent Details:\n");
    printf("Name: %s", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.mark);
 return 0;
}
