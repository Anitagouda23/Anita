#include <stdio.h>
int main() {
    int arr[12]={1,2,3,4,5},i,n;
    int *start,*end,temp;
    start=arr;
    end=arr+n-1;
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    for(i=0; i<5; i++){
            printf("%d arr[i]");
}
    
   
