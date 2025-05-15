#include <stdio.h>
int main() {
    int n,sum=0,i;
    int a[n];
     printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0; i<n; i++){
        scanf("%d",&a[n]);
        sum=sum+a[n];
    }
    printf("sum=%d",sum);
}
