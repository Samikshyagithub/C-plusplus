#include <iostream>
#include "../include/linkedlist.h"
using namespace std;



bool linkedlist ::isEmpty()
{
    cout << "LinkedList is Empty or Not...\n";
    Node *temp = HEAD; 
    if (temp == NULL)
    {
        cout << "True: List is Empty \n";
        return true;
    }
    else
    {
        cout << "False: List is not Empty \n\n";
        return false;
    }
}



void linkedlist ::addToHead(int data)
{
    Node *NewNode = new Node;
    NewNode->data = data;
    NewNode->next = HEAD;
    HEAD = NewNode;
    cout << "Create a New Node with data " << NewNode->data << "New Node added successfully to HEAD \n";
}

void linkedlist ::addToTail(int data)
{
    Node *NewNode = new Node;
    NewNode->data = data;
    NewNode->next = NULL; 
    Node *temp = HEAD;    
        if (HEAD == NULL)
    {
        HEAD = NewNode;
        cout << "New Node with Data " << NewNode->data << " Added to both HEAD and TAIL of previously empty Linked List\n";
    }


    else
    {
        while (temp->next != NULL)
        {                      
            temp = temp->next; 
        }
        temp->next = NewNode; 
        cout << "New Node with Data " << NewNode->data << " Added successfully to TAIL \n";
    }
}

void linkedlist ::add(int data, Node *predecessor)
{
    Node *NewNode = new Node;
    NewNode->data = data;
    Node *temp = HEAD; 
    if (temp == NULL)
    {
        cout << "Previous Node can't be NULL \n";
        return;
    }
    else
    {
        while (temp != NULL)
        {
            if (temp == predecessor)
            {
                NewNode->next = predecessor->next;
                predecessor->next = NewNode;
                cout << "New Node with data " << NewNode->data << " Added successfully" << predecessor->data << endl;
                return;
            }
            temp = temp->next;
        }
    }
}

void linkedlist ::removeFromHead()
{
    Node *temp = HEAD; 
    HEAD = HEAD->next; 
    delete temp;       
    cout << "First Node Deleted Successfully...... \n";
}

void linkedlist ::remove(int data)
{
    int check = data;
    Node *PreviousNode;
    if (HEAD == NULL && HEAD->data == check)
    {
        PreviousNode = HEAD;
        HEAD = HEAD->next;
        delete PreviousNode;
    }

    Node *temp = HEAD; 
    if (temp->next != NULL)
    {
        while (temp->next != NULL)
        {
            if (temp->next->data == check)
            {
                PreviousNode = temp->next;
                temp->next = temp->next->next;
                delete PreviousNode;
                cout << check << " Deleted successfully......\n";
            }
            else
            {
                temp = temp->next;
            }
        }
    }
    else
    {
        cout << "You can't delete from EMPTY List \n";
    }
}

Node *linkedlist ::retrieve (int data)
{
    int extract = data;
    Node *temp = HEAD;
    Node *samikshya;
    int count = 1;
    if (temp != NULL)
    {
        while (temp != NULL)
        {
            if (temp->data == extract)
            {
                cout << extract << " Found in the list at index== " << count << endl;
                samikshya = temp;
                return samikshya;
            }
            temp = temp->next;
            count++;
        }
        cout << extract << " Not found in the linkedlist \n";
    }
    return nullptr;
}

bool linkedlist ::search(int data)
{
    int check = data;
    Node *temp = HEAD;
    int count = 0;
    if (temp != NULL)
    {
        while (temp != NULL)
        {
            if (temp->data == check)
            {
                count++;
            }
            temp = temp->next;
        }
    }
    if (count == 0)
    {
        cout << check << " Not found in the list"
             << " Return False..... \n\n";
        return false;
    }
    else
    {
        cout << check << " Found in the list"
             << " Return True.....\n\n";
        return true;
    }
}

void linkedlist ::traverse()
{
    Node *temp = HEAD; 
    if (temp != NULL)
    {
        cout << "Linked List is: ";
        while (temp != NULL)
        {                              
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl
             << endl;
    }
    else
    {
        cout << "The LIST is EMPTY. \n";
    }
}
