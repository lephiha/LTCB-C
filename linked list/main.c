#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

void inList (struct Node node) {
    printf("%d\n", node.value);
    if (node.next == NULL) {
        return;
    }

    inList(*node.next);
}

int main()
{
    // tao node dau tien
    struct Node head;
    head.value = 12;
    head.next = NULL;

    struct Node second;
    second.value = 37;
    second.next =NULL;

    struct Node third;
    third.value = 30;
    third.next =NULL;

    head.next = &second;
    second.next = &third;
    inList(head);
    return 0;
}
