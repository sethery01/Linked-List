#include "list.h"

List * createList()
{
    List *list = malloc(sizeof(List));

    if (list) {
        list->size = 0;
        list->head = NULL;
    }
    return list;
}

Node * createNode(int data, Node * next)
{
    Node *p = malloc(sizeof(Node));

    if (p) {
        p->data = data;
        p->next = next;
    }
    return p;
}

int insertAtHead(List * list, int data)
{
    Node * p = createNode(data, NULL);

    if (!list || !p) {
        return -1;
    }
    else if (list->head == NULL) {
        list->head = p;
    }
    else {
        p->next = list->head;
        list->head = p;
    }
    return 0;
}

void printList(List * list)
{
    Node *cursor = list->head;

    while (cursor) {
        printf("%d ", cursor->data);
        cursor = cursor->next;
    }
    printf("\n");
}