#include <iostream>
using namespace std;

#include "linkedlistqueue.h"

void linkedlistqueue::enqueue(int item){
    l3.addToTail(item);
    return;
};

int linkedlistqueue::dequeue(){
    if(l3.isEmpty()){
        return 0;
    }
    int temp = l3.head->data;
    l3.removeFromHead();
    return temp;
};

bool linkedlistqueue::isEmpty(){
    return l3.isEmpty();
};

int linkedlistqueue::viewFront(){
    return l3.tail->data;
};
int linkedlistqueue::viewBack(){
    return l3.head->data;
};