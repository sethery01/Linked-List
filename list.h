#include <stdio.h>
#include <stdlib.h>

// types
typedef struct _Node Node;
typedef struct _List List;

// stuct defs
struct _Node {
    char *data;
    Node *next;
};

struct _List {
    int size;
    Node *head;
};

// function prototypes
List * createList();
Node * createNode(char * data, Node * next);
int insertAtHead(List * list, char * data);
void printList(List * list);
void removeFromTail(List * list);
void freeList(List * list);