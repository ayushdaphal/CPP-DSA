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

void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d){
    Node *temp = new Node(d);
    tail->next=temp;
    tail=tail->next;

}

void insertInMiddle (Node* &head, int pos, int d){

    Node* temp = head;
    int cnt=1;

while (cnt<pos-1){
    temp=temp->next;
}

//creating a node for d
Node* nodeToInsert= new Node(d);
nodeToInsert -> next= temp->next;
temp->next=nodeToInsert;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // create a new node
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    // head pointed to new node
    Node *head = node1;
    Node *tail= node1;

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtTail(tail, 20);
    print(head);

 insertInMiddle(head,2,120);
    print(head);
    
    return 0;
}