// Given an array, rotate the array to the right by k steps, where k is non-negative.
// Example 1:
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 step to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]

#include<stdio.h>

void ArrayRotate(int a[], int n, int k);

int main(){
    int n,k;
    printf("How many elements you want to enter: ");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter Element: ");
        scanf("%d",&a[i]);
    }

    printf("How many times you want to rotate this array: ");
    scanf("%d",&k);

    ArrayRotate(a, n, k);

    printf("Rotated Array: ");
    for(int i=0;i<n;i++)printf("%d ",a[i]);

    return 0;
}

void ArrayRotate(int a[], int n, int k){
    int temp;
    for(int j=0;j<k;j++){
        for(int i=n-2;i>=0;i--){
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
}