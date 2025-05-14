
#include <stdio.h>
void even(int arr[],int size){
    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            printf("%6d",arr[i]);
        }
    }
}
int main()
{
    int n[]={1,2,3,4,5,6,7,8};
    int size=5;
    printf("even numbers in the array are\n:" );
    even(n,size);
    return 0;
}
