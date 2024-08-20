#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *random;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->random = NULL;
    }
};

// there are 2 pointers in the node --> 1 poiting to the next and 1 pointing to any random node
// Node consists of data, next, random
// clone the same linkedlist

// Approach 1:- create a clone list ( using original list next pointer)
//              for random pointer
//              Use another loop to copy the random pointers one by one
//              TC-->O(n^2)

// Approach 2:- create a clone list using the next pointer  ,  TC-->O(n)
//              create a map where every node from the original list will point to the node to the new cloned list
//              now while traversing in the original list, to get the random pointers go to the random pointer node in the original list and then go to the clone of the same with the help of the map
//              clone Node->random == mapping[ original Node-->random]
//              TC->O(n)  SC-->O(n)

void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

Node *copyList(Node *head)
{
    // create a clone list
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;

    Node *temp = head;
    while (temp != NULL)
    {
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp = temp->next;
    }

    // create a map
    unordered_map<Node *, Node *> oldToNewNode;

    Node *originalNode = head;
    Node *cloneNode = cloneHead;
    while (originalNode != NULL && cloneNode != NULL)
    {
        oldToNewNode[originalNode] = cloneNode;
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }
    originalNode = head;
    cloneNode = cloneHead;

    // setup random pointer

    while (originalNode != NULL)
    {
        cloneNode->random = oldToNewNode[originalNode->random];
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }

    return cloneHead;
}

// Approach 3:- (without map)   TC->O(n)     SC->O(1)
//              clone using next pointer
//     (step 2) original list mei jo next pointer kr rahe hai , remove it and point it to the same nodes in the clone List, (map like structure will be created)
//              and next pointer (clone Node->next == head->next) head=head->next
//              og: 1-2-3-4-5
//              cl: 1-2-3-4-5
// after doing the above things
//              1-2-3-4-5-null
//              |/|/|/|/|/
//              1-2-3-4-5-null
// now copy the random pointer
// then temp=original head  --> temp->next->random=temp->random
// revert changes done in step 2
// return cloneHead
