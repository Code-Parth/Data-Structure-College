#include <stdio.h>
#include <stdlib.h>

struct node *head = NULL;
struct node *tail = NULL;

struct node
{
    int data;
    struct node *next;
};

void push(int z);
int pop();
struct node *getanode(int z);

void main()
{
    int temp;
    int temporary;
    while (1)
    {
        printf("1 == PUSH, 2 == POP\n");
        scanf("%d", &temp);
        fflush(stdin);

        if (temp == 1)
        {
            scanf("%d", &temporary);
            fflush(stdin);
            push(temporary);
        }
        else if (temp == 2)
        {
            printf("%d\n", pop());
        }
    }
}

void push(int z)
{
    struct node *newNode = getanode(z);

    if (head == tail && head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

struct node *getanode(int z)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        exit(1);
    }

    newNode->data = z;
    newNode->next = NULL;
    return newNode;
}

int pop()
{
    if (head == NULL)
    {
        printf("Quene is empty.\n");
        exit(1);
    }
    int value = head->data;
    struct node *oldNode = head;
    head = head->next;
    free(oldNode);
    return value;
}
