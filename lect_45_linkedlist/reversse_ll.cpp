#include <iostream>
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



// iterative solution 
// time complexity --> O(n)
// space complexity --> o(1)


// Node* reverseLL(Node* head){
// if(head == NULL || head->next == NULL)
// {
//     return head;
// }
// Node *prev= NULL;
// Node *curr= head; 
// Node* forward= NULL;

// while( curr != NULL){
//     forward =curr-> next;
//     curr->next= prev;
//     prev = curr;
//     curr= forward;
// }
// return prev;
}




//recurssive solution
 

Node* reverseLL(Node* head){

    Node *curr =head;
    Node *prev =NULL;
    reverse (head,curr,prev);
    return head; }

void reverse (Node *head, Node *curr, Node *prev){

    //basecase
    if (curr == NULL ){
        head=prev;
        return ;
    }

    Node*  forward = curr->next;
    reverse(head, forward, curr);
    curr ->next=prev; 

}
