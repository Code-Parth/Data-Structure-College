#include <stdio.h>

int top = -1, stack[15];

void create(int n);
void push(int value);
void pop();
void print();
void peep(int x);
void change(int y);

int main()
{
    int c, value, i, n, x, y;

    printf("Choices are \n 1: Create an array \n 2: Push Value \n 3: Pop Value \n 4: Print array \n 5: Peep value \n 6: Change value \n 0: End Program \n");

    for (i = 0; i >= 0; i++)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
        {
            printf("Enter number of elements required : ");
            scanf("%d", &n);
            create(n);
            break;
        }

        case 2:
        {
            printf("Enter value to be pushed : ");
            scanf("%d", &value);
            push(value);
            break;
        }

        case 3:
        {
            pop();
            break;
        }

        case 4:
        {
            printf("Array is : ");
            print();
            break;
        }

        case 5:
        {
            printf("Enter value to be peeped: ");
            scanf("%d", &x);
            peep(x);
            break;
        }

        case 6:
        {
            printf("Enter new value to be updated: ");
            scanf("%d", &y);
            change(y);
            break;
        }

        default:
        {
            printf("Wrong choice");
            break;
        }
        }
    }
    return 0;
}

void create(int n)
{
    for (top = 0; top < n; top++)
    {
        int v;
        printf("Enter array element: ");
        scanf("%d", &v);
        stack[top] = v;
    }
    top = top - 1;
}

void push(int value)
{
    if (top == 14)
    {
        printf("\nStack is full");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

void pop()
{
    int x;
    if (top == -1)
    {
        printf("\nStack is underflow");
    }
    else
    {
        x = stack[top];
        top--;
        printf("Value to be popped is: %d", x);
    }
    printf("\n");
}

void print()
{
    int i;
    for (i = 0; i <= top; i++)
    {
        printf("%d \t", stack[i]);
    }
    printf("\n");
}

void peep(int x)
{
    int i;
    for (i = 0; i <= top; i++)
    {
        if (stack[i] == x)
        {
            printf("Number %d is stored at index number %d", x, i);
        }
    }
    printf("\n");
}

void change(int y)
{
    stack[top] = y;
}
