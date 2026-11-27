// Insertion Sort

#include "stdio.h"
#include "stdlib.h"

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }

    int key, i = 1, j;

    while (i < size)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        i++;
    }
    
    printf("\nSorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
