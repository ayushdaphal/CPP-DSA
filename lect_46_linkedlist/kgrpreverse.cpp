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

//reverse the linked list in a grp of k elements 
//example linked list is 1 2 3 4 5 6
// and k =2
//outout --> 2 1 4 3 6 5 

 Node *kReverse(Node *head, int k){
    //base case 
    if (head ==NULL){
        return NULL;    
    }

    //Step 1 -- reverse first k nodes 
    Node *next= NULL;
    Node *curr= head;
    Node *prev= NULL;
    int count =0;

    while(curr != NULL && count < k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }

    //step 2 -- recurssion dekh lega 
    if(next!=NULL){
        head->next =kReverse(next,k);
    }

    //step 3 -- return head of reversed list
    return prev;

 }

 //tc --> O(n)
 //sc --> O(n)
 