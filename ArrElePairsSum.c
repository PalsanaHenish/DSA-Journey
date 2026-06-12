// Given an array of N integers, and an integer K, find the number of pairs of elements in the 
// array whose sum is equal to K. 
// e.g. Input: N = 4, K = 6 
// arr[] = {1, 5, 7, 1} 
// Output: 2 
// Explanation: 
// arr[0] + arr[1] = 1 + 5 = 6 
// and arr[1] + arr[3] = 5 + 1 = 6.

#include<stdio.h>

int main(){
    int n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
   
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter Element: ");
        scanf("%d",&a[i]);
    }

    int k;
    printf("Enter an integer: ");
    scanf("%d",&k);

    int c=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j] == k){
                printf("(a[%d]=%d) + (a[%d]=%d) = %d\n",i,a[i],j,a[j],k);
                c++;
            }
        }
    }

    if(c==0){
        printf("There doesn't exist a single pair whose sum equals to %d.",k);
    }

    return 0;
}