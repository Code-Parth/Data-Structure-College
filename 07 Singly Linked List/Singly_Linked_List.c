#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *headr = NULL;

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

void AddEnd(int value, struct node **head)
{
    struct node *cur = *head;
    struct node *newNode = getanode(value);
    if (*head == NULL)
    {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    while (cur->next != NULL)
    {
        cur = cur->next;
    }
    cur->next = newNode;
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

void RemoveBeforeIndex(struct node *head, int index)
{

    int i = 0;
    while (head != NULL && i < index - 2)
    {
        head = head->next;
        i++;
    }
    if (head == NULL || head->next == NULL)
    {
        printf("Index out of range, Function called removebeforeIndex.\n");
        exit(1);
    }
    struct node *q = head->next;
    head->next = q->next;
    free(q);
}

void InsertAsc(int temporary, struct node *head)
{
    struct node *q = getanode(temporary);
    if (head == NULL)
    {
        headr = q;
        return;
    }
    while (head->next != NULL && head->data < temporary)
    {
        head = head->next;
    }
    if (head == NULL)
    {
        printf("Index out of range, Function called InsertAsc.\n");
        exit(1);
    }

    q->next = head->next;
    head->next = q;
    free(q);
}

void RemoveAfterIndex(struct node *head, int index)
{

    int i = 0;
    while (head != NULL && i < index)
    {
        head = head->next;
        i++;
    }
    if (head == NULL || head->next == NULL)
    {
        printf("Index out of range, Function called removeAfterIndex.\n");
        exit(1);
    }
    struct node *q = head->next;
    head->next = q->next;
    free(q);
}

void main()
{
    int temp;
    int temporary;
    while (1)
    {
        printf("1 == ADD AT FRONT, 2 == ADD AT END, 3 == INSERT IN ASCENDING, 4 == DELETE AT FRONT, 5 == DELETE BEFORE POSITION, 6 == DELETE AFTER POSITION \n");
        scanf("%d", &temp);

        if (temp == 1)
        {
            printf("Enter value:\n");
            scanf("%d", &temporary);
            AddNodeHead(temporary, &headr);
        }
        else if (temp == 2)
        {
            printf("Enter value:\n");
            scanf("%d", &temporary);
            AddEnd(temporary, &headr);
        }
        else if (temp == 4)
        {
            RemoveNodeHead(&headr);
        }
        else if (temp == 3)
        {
            printf("Enter value:\n");
            scanf("%d", &temporary);
            InsertAsc(temporary, headr);
        }
        else if (temp == 5)
        {
            printf("Enter index:\n");
            scanf("%d", &temporary);
            RemoveBeforeIndex(headr, temporary);
        }
        else if (temp == 6)
        {
            printf("Enter index:\n");
            scanf("%d", &temporary);
            RemoveAfterIndex(headr, temporary);
        }
        printRecursive(headr);
    }
}
