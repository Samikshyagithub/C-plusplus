#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include "queue.h"

class arrayqueue:public queue{
    public:
    int size;
    int front;
    int back;
    int *array;
    arrayqueue(int s):size(s) {
        array=new int[size];
        front=-1;
        back=-1;
    }

    void enqueue(int item);
    int dequeue();
    bool isEmpty();
    bool isFull();
    int viewFront();
    int viewBack();
};

#endif