#include "list.h"

int main(void)
{
    printf("====== LINKED LIST FUN ======\n");

    List * list = createList();

    for (int i = 20; i > 0; i--) {
        insertAtHead(list,i);
        printList(list);
    }

    while (list->head) {
        removeFromTail(list);
        printList(list);
    }

    freeList(list);
}