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
        list->size++;
    }
    else {
        p->next = list->head;
        list->head = p;
        list->size++;
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

void removeFromTail(List * list) 
{
    if (!list->head) {
        return;
    } 

    Node *cursor = list->head;

    if (!cursor->next) {
        free(cursor);
        list->head = NULL;
        list->size--;
        return;
    }

    while (cursor->next->next) {
        cursor = cursor->next;
    }
    
    free(cursor->next);
    cursor->next = NULL;
    list->size--;
}

void freeList(List * list) 
{
    while (list->head) {
        removeFromTail(list);
    }
    free(list);
}