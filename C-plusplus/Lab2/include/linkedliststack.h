#ifndef LinkedListSTACK_H
#define LinkedListSTACK_H

#include "stack.h"
class LinkedListstack:public stack {
    public:

    LinkedList lab2;

    void push(int item);
    int pop();
    bool isEmpty();
    int viewtop();
};

#endif