#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void merge(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1;
    int n2 = h - m;
    int a1[n1], a2[n2];

    for (int i = 0; i < n1; i++)
    {
        a1[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        a2[i] = arr[i + m + 1];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (a1[i] > a2[j])
        {
            arr[k] = a2[j];
            j++;
            k++;
        }
        else if (a1[i] < a2[j])
        {
            arr[k] = a1[i];
            i++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = a1[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = a2[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, h);
        merge(arr, l, mid, h);
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

    mergesort(arr, 0, size - 1);

    print(arr, size);
}
