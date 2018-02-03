// 从函数中返回指针

#include<stdio.h>

struct entry {
    int value;
    struct entry *next;
};

struct entry *findEntry (struct entry *listPtr, int match) {
    if (listPtr == (struct entry *) 0) {
        return listPtr;
    }
    if (listPtr->value == match) {
        return listPtr;
    }else {
        findEntry (listPtr->next, match);
    }
}

int main () {

    struct entry *findEntry (struct entry *listPtr, int match);
    struct entry n1, n2, n3;
    struct entry *listPtr, *listStart = &n1;

    int search;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = (struct entry *) 0;

    printf ("Enter value to locate: ");
    scanf ("%i", &search);

    listPtr = findEntry (listStart, search);

    if (listPtr != (struct entry *) 0) {
        printf ("Found %i.\n", listPtr->value);
    }else {
        printf ("NOt found!\n");
    }
    return 0;
}
