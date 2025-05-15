#include<stdio.h>
int main(){
     int x=12 ,y=23,z;
     int *ptr1=&x;
     int *ptr2=&y;
    printf("before swap\n x=%d\n y=%d\n",x,y);
     z=*ptr1;
     *ptr1=*ptr2;
     *ptr2=z;
         printf("after swap\n x=%d\n y=%d\n",x,y);
}
    
   
