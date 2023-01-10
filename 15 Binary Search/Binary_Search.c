#include <stdio.h>
#include <stdbool.h>

void iterative(int array[], int n, int value);
bool recursive(int array[], int low, int high, int value);

#define size 10000

void main()
{

    int Array[size];

    for (int i = 0; i < size; i++)
    {
        Array[i] = i - 213;
    }

    recursive(Array, 0, sizeof(Array) / sizeof(Array[0]) - 1, 2345);
}

void iterative(int array[], int n, int value)
{
    int low = 0, high = n - 1, mid, index = -1;

    while (low != high)
    {
        mid = (low + high) / 2;

        if (array[mid] == value)
        {
            index = mid;
            break;
        }
        else if (array[mid] > value)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("Found value at index %d value %d.\n", index, array[index]);
}

bool recursive(int array[], int low, int high, int value)
{
    if (low > high)
    {
        return false;
    }

    int mid = (low + high) / 2;

    if (array[mid] == value)
    {
        printf("Found value at index %d value %d.\n", mid, array[mid]);
        return true;
    }
    else if (array[mid] > value)
    {
        return recursive(array, low, mid - 1, value);
    }
    else
    {
        return recursive(array, mid + 1, high, value);
    }
}
