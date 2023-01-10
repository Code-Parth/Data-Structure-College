#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void RemoveNodeHead(struct node **head)
{
    if (*head == NULL)
    {
        printf("\nList is empty, Couldn't Remove Node from Head.\n");
        return;
    }
    struct node *ptrDeleted = *head;
    *head = ptrDeleted->next;
    free(ptrDeleted);
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
void AddNodeHead(int value, struct node **head)
{
    struct node *newNode = getanode(value);
    newNode->next = *head;
    *head = newNode;
}

void printRecursive(struct node *head)
{
    if (head == NULL)
    {
        printf("\n");
        return;
    }
    printf("%d ", head->data);
    printRecursive(head->next);
}

int getElementIndex(struct node *head, int index)
{
    int i = 0;
    while (head != NULL && i < index)
    {
        head = head->next;
        i++;
    }
    if (head == NULL)
    {
        printf("Index out of range, Function called getElementIndex.\n");
        exit(1);
    }
    return head->data;
}

void push(int value)
{
    AddNodeHead(value, &head);
}

void pop()
{
    RemoveNodeHead(&head);
}

void top()
{
    printf("\n%d\n", getElementIndex(head, 0));
}

void printStack()
{
    printRecursive(head);
}

void main()
{
    int temp;
    int temporary;
    while (1)
    {
        printf("1 == PUSH, 2 == POP, 3 == PEEP\n");
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
            pop();
        }
        else if (temp == 3)
        {
            top();
        }
    }
}
