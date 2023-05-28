#include <iostream>
#include "linkedlist.cpp"
#include "linkedliststack.h"

void LinkedListstack:: push(int item){
    lab2.addTohead(item);
};

int LinkedListstack::pop(){
    int temp=lab2.head->data;
    lab2.removeFromhead();
    return temp;
};

bool LinkedListstack:: isEmpty(){
    return lab2.isEmpty();
};

int LinkedListstack:: viewtop(){
    return lab2.head->data;
};