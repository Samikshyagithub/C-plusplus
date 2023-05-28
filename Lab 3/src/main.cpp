#include <iostream>
#include "arrayqueue.cpp"
#include "linkedlistqueue.cpp"

using namespace std;

int main(){

    cout<<" Array Queue\n\n";
    arrayqueue lab3(5);

    cout<<"Checking isEmpty\n\n";
    if(lab3.isEmpty()){
        cout<<" Queue is empty\n\n";
    }
    else{
        cout<<" Queue is not empty\n\n";
    }

    cout<<" Adding 25 to the queue\n\n";
    lab3.enqueue(25);
    if(lab3.isEmpty()){
        cout<<" Queue is empty\n\n";
    }else{
        cout<<" Queue is not empty\n\n";
    }

    cout<<"Filling the queue\n\n";
    lab3.enqueue(26);
    lab3.enqueue(27);
    lab3.enqueue(28);
    lab3.enqueue(29);
    cout<<" Checking isFull\n\n";
    if(lab3.isFull()){
        cout<<" Queue is full\n\n";
    }else{
        cout<<" Queue is not full\n\n";
    }

    cout<<" Removing a data from the queue\n\n ";
    cout<<lab3.dequeue()<<" is removed from the list\n\n";

    cout<<" Again checking isFull\n\n";
    if(lab3.isFull()){
        cout<<"Queue is full\n\n";
    }else{
        cout<<" Queue is not full\n\n";
    }

    cout<<" The first element in the queue is "<<lab3.viewFront()<<endl;
    cout<<"The last element in the queue is "<<lab3.viewBack()<<endl;

    cout<<" Linked List Queue\n\n";
    linkedlistqueue linkvalue;
    cout<<" Checking isEmpty\n\n";
    if(linkvalue.isEmpty()){
        cout<<" Queue is empty\n\n";
    }else{
        cout<<" Queue is not empty\n\n";
    }

    cout<<" Adding 30 to the queue\n\n";
    linkvalue.enqueue(30);
    if(linkvalue.isEmpty()){
        cout<<" Queue is empty\n\n";
    }else{
        cout<<" Queue is not empty\n\n";
    }

    cout<<" Filling the queue\n\n";
    linkvalue.enqueue(31);
    linkvalue.enqueue(32);
    linkvalue.enqueue(33);
    linkvalue.enqueue(34);
    
    cout<<" Removing a data from the queue\n\n";
    cout<<linkvalue.dequeue()<<" is removed from the list\n\n";

    cout<<" Not checking isFull as linkedlist can be expanded as per the need\n\n";
    

    cout<<" The first element in the queue is "<<linkvalue.viewFront()<<endl<<endl;
    cout<<" The last element in the queue is "<<linkvalue.viewBack()<<endl<<endl;

    return 0;
}