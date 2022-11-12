#include <stdio.h>
#define size 5
struct stack
{
    int a[size], top;
    int temp[size], tos;
} s;

void push(int item)
{
    s.a[++s.top] = item;
}

int pop()
{
    return s.a[s.top--];
}

void display()
{
    int i;
    printf("\nThe stack contains: ");
    for (i = s.top; i >= 0; i--)
    {
        printf("\n\t%d", s.a[i]);
    }
}

void peep()
{
    printf("\n\tTop : %d", s.top);
    printf("\n\tValue: %d", s.a[s.top]);
}

void change(int row, int new_element)
{
    int i;
    int j = -1;
    printf("\n\tTop: %d", s.top);
    for (i = s.top; i > row; i--)
    {
        s.temp[++j] = s.a[s.top--];
    }
    s.a[s.top] = new_element;
    for (i = j; i > -1; i--)
    {
        s.a[++s.top] = s.temp[j--];
    }
}

int main()
{
    s.top = -1;
    int item, choice, row, new_element;
    char ans;
    do
    {
        printf("\n-----------------------------");
        printf("\nSTACK IMPLEMENTATION PROGRAM\n");
        printf("-----------------------------");
        printf("\n     1. Push\n     2. Pop\n     3. Display\n     4. Peep\n     5. Change\n     6. Exit\n");
        printf("-----------------------------\n");
        printf("\n  Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            {
                if (s.top >= size - 1)
                {
                    printf("\nStack overflow..\n");
                    break;
                }
                printf("\nEnter item to be pushed:  ");
                scanf("%d", &item);
                push(item);
                break;
            }
            
            case 2:
            {
                if (s.top == -1)
                {
                    printf("\n..Stack underflow..\n");
                    break;
                }
                pop();
                break;
            }

            case 3:
            {
                display();
                break;
            }

            case 4:
            {
                peep();
                break;
            }

            case 5:
            {
                printf("\n\tEnter row no : ");
                scanf("%d", &row);
                printf("\n\tEnter new element: ");
                scanf("%d", &new_element);
                change(row, new_element);
                break;
            }

            case 6:
            {
                return 0;
            }

            default:
            {
                printf("\n\nInvalid Input!");
            }
        }
    } while (choice != 6);

    return 0;
}