#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[j], &arr[i]);
        }
    }
    i++;
    swap(&arr[i], &arr[high]);
    return i;
}
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pindex = partition(arr, low, high);
        quicksort(arr, low, pindex - 1);
        quicksort(arr, pindex + 1, high);
    }
}
void print(int arr[], int size)
{
    printf(" ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main(void)
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90}, size = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, size - 1);

    print(arr, size);
}
