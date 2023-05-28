
#include <iostream>
#include "linkedlist.cpp"
int main(){
    linkedlist L1;
    L1.isEmpty(); 
    L1.addToTail(2);
    L1.traverse();
    L1.addToHead(4);
    L1.traverse();
    L1.addToTail(6);
    L1.traverse();
    L1.addToTail(8);
    L1.traverse();
    Node* predecessor=L1.retrieve(10);
    L1.add(12,predecessor);
    L1.traverse();
    Node* predecessor2=L1.retrieve(14);
    L1.add(16,predecessor2);
    L1.traverse();
    L1.removeFromHead();
    L1.traverse();
    L1.remove(18);
    L1.traverse();
    L1.search(20);
    L1.search(22);
    L1.isEmpty();
    
    return 0;
    
}
