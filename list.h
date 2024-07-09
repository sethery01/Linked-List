#include <stdio.h>
#include <stdlib.h>

typedef struct _Node Node;
typedef struct _List List;

struct _Node {
    int data;
    Node *next;
};

struct _List {
    int size;
    Node *head;
};

List * createList();
Node * createNode(int data, Node * next);
void insertHead(List * list, Node * newNode);
void printList(List * list);