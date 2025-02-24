#include<iostream>
using namespace std ;


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

//consider right side element as middle node in case of even number of nodes 
//if 4 elements are there 3rd is the middle one


int getLength (Node *head){
    int len=0;
    while (head !=NULL){
        len++;
        head=head->next;
    }
    return len;
}
Node *findMiddle (Node *head){
    int len =getLength(head);
    int ans= (len/2);

    Node* temp=head;
    int cnt=0;
    while(cnt < ans){
        temp=temp->next;
        cnt++;
    }
    return temp;

}
// tc--> O(n)
