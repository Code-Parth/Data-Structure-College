# Introduction To Pointers

## Call By Value Function

### Code

```C
#include <stdio.h>

void swap(int, int);

int main()
{
    int a, b;
    printf("\nEnter a Value of A=");
    scanf("%d", &a);
    printf("\nEnter a Value of B=");
    scanf("%d", &b);
    swap(a, b);
    printf("\nOld Values:");
    printf("A=%d  B=%d \n", a, b);
}

void swap(int p, int q)
{
    int tmp;
    tmp = p;
    p = q;
    q = tmp;
    printf("New Values After Swap:");
    printf("A=%d B=%d", p, q);
}
```

### Output

![Call By Value Light](https://github.com/Code-Parth/Data-Structure-College/blob/master/Practical-01/Img/Light/Call-By-Value-Output-Light.png#gh-light-mode-only)
![Call By Value Dark](https://github.com/Code-Parth/Data-Structure-College/blob/master/Practical-01/Img/Dark/Call-By-Value-Output-Dark.png#gh-dark-mode-only)

-----

## Call By Reference Function

### Code

```C
#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a, b;
    printf("\nEnter a Value of A=");
    scanf("%d", &a);
    printf("\nEnter a Value of B=");
    scanf("%d", &b);
    swap(&a, &b);
    printf("\nOld Values:");
    printf("A=%d  B=%d \n", a, b);
}

void swap(int *p, int *q)
{
    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;
    printf("New Values After Swap:");
    printf("A=%d B=%d", *p, *q);
}
```

### Output

![Call By Reference Light](https://github.com/Code-Parth/Data-Structure-College/blob/master/Practical-01/Img/Light/Call-By-Reference-Output-Light.png#gh-light-mode-only)
![Call By Reference Dark](https://github.com/Code-Parth/Data-Structure-College/blob/master/Practical-01/Img/Dark/Call-By-Reference-Output-Dark.png#gh-dark-mode-only)

-----
