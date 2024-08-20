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

//remove duplicates from a sorted linked list [tc-O(n) sc-O(1)]
//approach :- traverse and delete when the current node and the next node is same , and oint the curr to the next->next of current 

Node *uniqueSortedList(Node *head){
    //empty list
    if (head==NULL){
        return NULL;    
    }

    //non empty list 
    Node *curr =head; 

    while(curr!= NULL){
        if((curr->next !=NULL) && curr->data == curr->next->data){
            Node *next_next=curr->next->next;
            Node *nodeToDelete= curr->next; 
            delete (nodeToDelete); 
            curr->next = next_next;
        }else{
            curr=curr->next;
        }
    }
    return head;

}


//remove duplicates from an unsorted linked list 
//eg:-  4->2->5->4->2->2->null
//      expected output:- 4->2->5->null
//Solutions :- 
//1). sort a LL and use the prev algorithm 
//2). compare every element of the linked list with the first node then second then third--(2 loops)
//3). using map keep the value of the node true which is visited, if the value is found pehlese true then delete