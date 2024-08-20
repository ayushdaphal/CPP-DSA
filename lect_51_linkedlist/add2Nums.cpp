#include <iostream>
#include <vector>
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

// add 2 nums by linked list
//  input :
//  linked list 1 : 3-4-null
//  linked list 2 : 2-3-0-null

// output        : 2-6-4-null

// Approach :- reverse both the linked list add their nodes and then reverse the resultant node as well

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev;
}

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *temp = new Node(val);
    // empty list
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

Node *add(Node *first, Node *second)
{
    int carry = 0;
    Node *ansHead = NULL;
    Node *ansTail = NULL;
    while (first != NULL && second != NULL)
    {
        int sum = carry + first->data + second->data;
        int digit = sum % 10;
        // create node and add in ans linked list
        insertAtTail(ansHead, ansTail, digit);
        carry = sum % 10;
        first = first->next;
        second = second->next;
    }

    while (first != NULL)
    {
        int sum = carry + first->data;
        int digit = sum % 10;
        // create node and add in ans linked list
        insertAtTail(ansHead, ansTail, digit);
        carry = sum % 10;
        first = first->next;
    }

    while (second != NULL)
    {
        int sum = carry + first->data;
        int digit = sum % 10;
        // create node and add in ans linked list
        insertAtTail(ansHead, ansTail, digit);
        carry = sum % 10;
        second = second->next;
    }

    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        // create node and add in ans linked list
        insertAtTail(ansHead, ansTail, digit);
        carry = sum % 10;
    }
    return ansHead;
}
struct Node *addTwoLists(struct Node *first, struct Node *second)
{
    first = reverse(first);
    second = reverse(second);

    // addition of two linked list
    Node *ans = add(first, second);
}
