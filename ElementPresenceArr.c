// WAP to check weather number is present in array or not (using recursion only) and the
// function’s syntax is given below
// Int isInArray(int a[],int m);
// Where int a[] is Array of integer and m is element to be searched.

#include<stdio.h>

int checkElePresence(int a[], int m, int n);

int main(){
    int n;
    printf("Enter size of an array: ");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter Element: ");
        scanf("%d",&a[i]);
    }

    char c;
    scanf("%c",&c);
    printf("Do you want to search an element(y/any key): ");
    scanf("%c",&c);

    if(c == 'y'){
        printf("Enter element you want to search: ");
        int m;
        scanf("%d",&m);
        if(checkElePresence(a,m,n-1)){
            printf("Yes! Element is present in array.");
        }

        else{
            printf("No! Element is not present in array.");
        }
    }

    return 0;
}

int checkElePresence(int a[], int m, int n){
    if(n == 0)return 0;
    else if(a[n] == m)return 1;
    else return checkElePresence(a, m, n-1);
}