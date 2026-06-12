// WAP to find a sum of even number into 1D array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n],sum=0;
    for(int i=0;i<n;i++){
        printf("Enter Element: ");
        scanf("%d",&arr[i]);
        if(arr[i]%2 == 0)sum+=arr[i];
    }

    printf("Sum of even elements in array: %d",sum);

    return 0;
}