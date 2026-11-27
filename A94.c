#include "stdio.h"
#include "stdlib.h"

int *a;
int size;

void splitArr(int low, int high);
void mergeSort(int low, int mid, int high);

int main()
{
    printf("Enter size of array:");
    scanf("%d", &size);

    a = (int *)malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter elements:");
        scanf("%d", &a[i]);
    }

    splitArr(0, size - 1);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    free(a);

    return 0;
}

void splitArr(int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        splitArr(low, mid);
        splitArr(mid + 1, high);
        mergeSort(low, mid, high);
    }
}

void mergeSort(int low, int mid, int high)
{
    int *b = (int *)malloc(sizeof(int) * size);
    int h, i, j;
    h = low;
    i = low;
    j = mid + 1;
    while (h <= mid && j <= high)
    {
        if (a[h] >= a[j])
        {
            b[i++] = a[j++];
        }
        else
        {
            b[i++] = a[h++];
        }
    }
    if (j > high)
    {
        for (; h <= mid; h++)
        {
            b[i++] = a[h];
        }
    }
    else if (h > mid)
    {
        for (; j <= high; j++)
        {
            b[i++] = a[j];
        }
    }
    for (i = low; i <= high; i++)
    {
        a[i] = b[i];
    }

    free(b);
}