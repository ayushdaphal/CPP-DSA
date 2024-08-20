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

// i/p --> 1 0 2 1 2
// o/p --> 0 1 1 2 2

// Approach 1:-

Node *sortList(Node *head)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
            zeroCount++;
        else if (temp->data == 1)
            oneCount++;
        else if (temp->data == 2)
            twoCount++;

        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        if (zeroCount != 0)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if (oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if (twoCount != 0)
        {
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;
}
// tc--> O(n)
// sc--> O(1)




// Approach 2:-
// without data replacement
// change the pointers/links
// create 3 linked list contaioning 0,1,2 and then merge them

void populate(Node *tail, Node *curr)
{

    tail->next = curr;
    tail = curr;
}

Node *sortedList(Node *head)
{
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *curr = head;

    // create seperate list for 0,1,2
    while (curr != NULL)
    {
        int value = curr->data;
        if (value == 0)
        {
            populate(zeroTail, curr);
        }
        else if (value == 1)
        {
            populate(oneTail, curr);
        }
        else if (value == 2)
        {
            populate(twoTail, curr);
        }
    }

    // merge all 3
    if (oneHead->next != NULL)
        zeroTail->next = oneHead->next;
    else
        zeroTail->next = twoHead->next;

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    //setup head
    head=zeroHead->next;

    //delete dummynodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}
//tc-->O(n)
//sc-->O(1)
