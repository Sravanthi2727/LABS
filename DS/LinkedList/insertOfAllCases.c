#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertB(struct Node *head)
{
    int n;
    printf("\nValue to be inserted at the begning: ");
    scanf("%d", &n);
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = n;
    ptr->next = head;
    return ptr;
}

struct Node *insertAtInd(struct Node *head)
{
    int n;
    printf("\nValue to be inserted at the Index: ");
    scanf("%d", &n);
    int index;
    printf("\nIndex value: ");
    scanf("%d", &index);
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = n;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *insertE(struct Node *head)
{
    int n;
    printf("\nValue to be inserted at the Ending: ");
    scanf("%d", &n);
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data = n;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node *insertByNode(struct Node *head)
{
    struct Node *prevNode = head;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    int prevValue;
    printf("\nEnter value of the existing node after which to insert: ");
    scanf("%d", &prevValue);

    while (prevNode != NULL && prevNode->data != prevValue)
    {
        prevNode = prevNode->next;
    }

    if (prevNode == NULL)
    {
        printf("Node with value %d not found.\n", prevValue);
        return head;
    }

    int n;
    printf("\nValue to be inserted : ");
    scanf("%d", &n);

    ptr->data = n;
    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}

int main()
{
    // Create struct
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *ptr;

    // allocating memory in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    ptr = (struct Node *)malloc(sizeof(struct Node));

    // allocating values and linking nodes
    head->data = 10; // (*head).data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 60;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // traversal(head);
    // head = insertB(head);
    // traversal(head);
    // insertAtInd(head);
    // traversal(head);
    // insertE(head);
    // traversal(head);
    insertByNode(head);
    traversal(head);
    return 0;
}
