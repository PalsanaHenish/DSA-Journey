// WAP to delete an element from array specified by user. if element is not found print a message
// “Element is not found” (do not take a new array).

#include<stdio.h>
#include<stdlib.h>

void delArrEle(int *a,int n, int x);

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);

    int *a = (int *)malloc(sizeof(int)*n);

    for(int i=0;i<n;i++){
        printf("Enter Element: ");
        scanf("%d",a+i);
    }

    printf("Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",*(a+i));
    }
    printf("\n");

    char c;
    scanf("%c",&c);
    printf("Do you want to DELETE any element(y/any key): ");
    scanf("%c",&c);

    if(c == 'y'){
        int x;
        printf("Enter element you want to delete: ");
        scanf("%d",&x);

        delArrEle(a, n, x);
        
        printf("Updated Array: ");
        for(int i=0;i<n-1;i++){
            printf("%d ",*(a+i));
        }

    }

    free(a);
    return 0;
}

void delArrEle(int *a,int n, int x){
    int c=0;
    for(int i=0;i<n;i++){
        c++;
        if(*(a+i) == x){
            for(int j=i;j<n-1;j++){
                *(a+j) = *(a+j+1);
            }
            realloc(a,sizeof(int)*(n-1));
            break;
        }
    }

    if(c == n){
        printf("Error 404! Element  not found.\n");
    }

}