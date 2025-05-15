#include <stdio.h>
int main(){
int numbers[]={10,20,30,40,50};
int*ptr=numbers;
printf("value at ptr:%d\n",*ptr);
ptr--;
printf("value at ptr after increament:%d\n",*ptr);
(*ptr)--;
printf("value at ptr after increamenting the value:%d\n",*ptr);
}
 
