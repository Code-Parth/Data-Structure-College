// Implement a Program for stack that performs following operations using array.
// PUSH()
// POP()
// PEEP()
// CHANGE()
// DISPLAY()
// EXIT()

#include <stdio.h>

#define stack[n] 3

int Option, top, x, i;
void push(void);
void pop(void);
void peep(void);
void change(void);
void display(void);
int main()
{
    top = -1;
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEP\n\t 4.CHANGE\n\t 5.DISPLAY\n\t 6.EXIT");
    do
    {
        printf("\n Enter the Option:");
        scanf("%d", &Option);
        switch (Option)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 2:
        {
            peep();
            break;
        }
        case 2:
        {
            change();
            break;
        }
        case 5:
        {
            display();
            break;
        }
        case 6:
        {
            printf("\n\t EXIT POINT \n");
            break;
        }
        default:
        {
            printf("\n\t Please Enter a Valid Option(1/2/3/4)");
        }
        }
    } while (Option != 4);
    return 0;
}

void push()
{
    if (top >= n - 1)
    {
        printf("\n\tSTACK is over flow");
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top <= -1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d", stack[top]);
        top--;
    }
}

void peep()
{

}

void change()
{

}

void display()
{
    if (top >= 0)
    {
        printf("\n The elements in STACK \n");
        for (i = top; i >= 0; i--)
            printf("\n%d", stack[i]);
        printf("\n Press Next Option");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}
