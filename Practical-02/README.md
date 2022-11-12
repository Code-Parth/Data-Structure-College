# Introduction To Dynamic Memory Allocation

## Malloc Function

### Code

```C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i, sum = 0;
    printf("Enter Number of Elements: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter Elements of Array: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum=%d", sum);
    free(ptr);
    return 0;
}
```

### Output

![Malloc-Light](https://github.com/Code-Parth/Data-Structure-College/blob/master/Practical-02/Img/Light/Malloc-Output-Light.png#gh-light-mode-only)
![Malloc-Dark](https://github.com/Code-Parth/Data-Structure-College/blob/master/Practical-02/Img/Dark/Malloc-Output-Dark.png#gh-dark-mode-only)

-----

## Calloc Function

### Code

```C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter Number of Elements: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter elements of array: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum=%d", sum);
    free(ptr);
    return 0;
}
```

### Output

![Calloc-Light](https://github.com/Code-Parth/Data-Structure-College/blob/master/Practical-02/Img/Light/Calloc-Output-Light.png#gh-light-mode-only)
![Calloc-Dark](https://github.com/Code-Parth/Data-Structure-College/blob/master/Practical-02/Img/Dark/Calloc-Output-Dark.png#gh-dark-mode-only)
-----
