#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    } 
};

//circular linked list doesnt have a node which points to null
//if you reach same node twice --> circular 

//approach:- 
//check empty list 
//check 1 node head->next== null --> false for circular 
//more than 1 node  -- > traverse with a new pointer temp (starting from a head)
//                       if temp == null false    
//                       if temp == head true


bool isCircularList (Node *head){
    if(head==NULL){
        return NULL; 
    }

    Node* temp = head->next; 
    while(temp != NULL && temp !=head){
        temp=temp->next; 
    }
    if (head->next == NULL){
        return false; 
    }
    

}