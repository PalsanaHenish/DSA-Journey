// WAP to enter an element at specific position into array. (Do not take a new array)
 
#include<stdio.h>
#include<stdlib.h>

int* insertElement(int *arr, int n, int x, int y);

int main(){
    int n;
    printf("How many elements you want to enter: ");
    scanf("%d",&n);

    int *arr = (int *)malloc(sizeof(int)*n);

    for(int i=0;i<n;i++){
        printf("Enter Element: ");
        scanf("%d",arr+i);
    }

    printf("Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");

    char c;
    scanf("%c",&c);
    printf("Would you like to insert an element(y/n): ");
    scanf("%c",&c);

    if(c == 'y'){
        int x,y;
        printf("Enter Element: ");
        scanf("%d",&x);
        printf("Enter index: ");
        scanf("%d",&y);

        int *arr2 = insertElement(arr,n,x,y);

        printf("Updated Array: ");
        for(int i=0;i<=n;i++){
            printf("%d ",*(arr2+i));
        }

        free(arr2);
    }

    else if(c == 'n');

    else printf("Error!!!");

    free(arr);

    return 0;
}

int* insertElement(int *arr, int n, int x, int y){
    realloc(arr,sizeof(int)*(n+1));
    for(int i=n-1;i>=y;i--){
        *(arr+i+1) = *(arr+i);
    }
    *(arr+y) = x;

    return arr;
}