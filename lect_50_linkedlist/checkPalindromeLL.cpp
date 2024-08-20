#include<iostream>
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

// check palindrome 
// i/p--> 1-2-1-2-1
// o/p--> this is a palindrome

// Approach 1 -->   create an array
//                  copy LL content to the array
//                  write logic to check palindrome using start and end element of array
//                  sc-->O(n)
//                  tc-->O(n)


bool checkPalindrome(vector<int>arr){

 int n=arr.size();
 int s=0;
 int e=n-1;

 while(s<=e){
    if(arr[s]!= arr[e])
        return 0;
        s++;
        e--;   
 }
 return 1; 
}

bool isPalindrome(Node *head){
    vector<int>arr;
    Node *temp =head;
    while(temp!=NULL){
    arr.push_back(temp->data);
    temp=temp->next;
    }
    return checkPalindrome(arr);
}



//Approach 2--> reach till the middle node 
//              reverse the middle ke aage wali linked list
//              compare both the parts if equal --> palindrome 
//              reverse the middle ke aage wali linked list (again)
//  tc--> O(n)
//  sc--> O(1)

Node *reverse(Node *head){
    Node* curr=head;
    Node* prev=NULL;
    Node *next=NULL;

    while(curr!= NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next; 
    } 
    return prev;
}

Node *getMid(Node *head){
    Node* slow=head;
    Node *fast=head->next;

    while(fast!=NULL && fast->next !=NULL){
        fast=fast->next->next; 
        slow=slow->next;
    }
    return slow;
}

bool Palindromecheck(Node *head){
    if(head->next=NULL){
        return true;
    } 

    Node *middle=getMid(head);
    Node *temp=middle->next;
    middle->next = reverse(temp);

    //Compare both the halves
    Node *head1=head;
    Node *head2 = middle->next;

    while(head2!=NULL){
        if (head1->data != head2->data){
            return false;
        }
        head1=head1->next;
        head2=head2->next;   
    }

    //repeat step2 --> give the list as it is in the input
    //temporary
    temp=middle->next;
    middle->next = reverse(temp);

    return true;
}