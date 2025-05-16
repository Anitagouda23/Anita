#include <stdio.h>
struct student {
    char name[20];
    float marks;};
int main() {a
    struct student students[3]; 
    float total,average;
    int i;
     for (i = 0; i < 3; i++) {
        printf("Enter name of the %d student\n",i+1);
        scanf(" %s", &students[i].name); 
        printf("enter marks: ");
        scanf("%f", &students[i].marks);
       total=total+students[i].marks;
     }
     average=total/3;
        printf("average of the 3 students=%.2f\n",average);
    }
