#include <iostream>
#include <map>
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

// detect loop in a linked list
//  remove cycle from a loop
//  give start node of loop in linked list in the output

//   1-2-3-4-5-6-7
//       |       |
//       |_ _ _ _|

// loop 3-4-5-6-7
// start node 3



// Approach :-
// detect cycle --> initially every node should be on false
//                    as you traverse change its value to true
//                    if it is found that the node has the prior value as true--> theres a loop

bool detectLoop(Node *head)
{

    if (head == NULL)
    {
        return 0;
    }

    map<Node *, bool> visited;

    Node *temp = head;
    while (temp != NULL)
    {

        if (visited[temp] == true)
        {
            cout<<"Cycle present on element"<<temp->data<<endl;
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return 0;
}
// SC-->O(n) 
// TC--> 0(n)



//floyds cycle detection algorithm     [TC--> O(n)  sc-->O(1)]
// approcah :-   put 2 pointers slow and fast on the head node 
//               slow moves one step at a time, fast moves 2 steps at a time 
//               if both meet in the future (slow and fast) --> loop exists

Node * floydDetectLoop(Node* head){
    if(head == NULL){
        return  ;
    }
    Node *s =head;  //slow
    Node *f =head;  //fast

    while (s!=NULL && f != NULL){
       
        f=f->next;
        if(f!=NULL){
            f=f->next;
        }
        s=s->next; 

        if(s==f){
            return s;
        }
    }
    return ; 
}   



//find the start node of the loop [TC=O(n) SC=O(1)]
// approach :-  step 1:- find the intersection point using floyds algo
//              step 2:- set slow to the head 
//              step 3:- move slow and fast at  the same pace of 1
//              step4 :- the point at that slow and fast meet again, thats the start point of the loop 


Node *getStartingNode(Node *head){
    if(head == NULL){
        return NULL ;
    }
    Node* intersection = floydDetectLoop(head);
    Node *slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection-> next;
    }
    return  slow;  

}



// remove the loop [TC=O(n) SC=O(1)]
// approach :- loop ke starting node ke pehli wali node ko point it to null 

void removeLoop(Node *head){
    if(head == NULL){
        return;
    }
    Node * startOfLoop= getStartingNode(head);
    Node *temp=startOfLoop;
    while(temp->next != startOfLoop ){
        temp=temp->next;
    }
    temp->next=NULL;
}