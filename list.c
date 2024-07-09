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

