#include<iostream>
#include<stack>
using namespace std;  

//delete the middle element of the stack and after deleting return the same stack without the middle element 
// first find the middle element 
// while reaching the middle element pop all the ellements and save them in a variable 
// after reaching the middle element pop it and then start restoring the elements poped which were before the middle element 
// can be done by recursion 

void solve( stack<int>&inputStack, int count , int size){
    //base case
    if(count==size/2){
        inputStack.pop();
        return;     
    }
    int num=inputStack.top();
    inputStack.pop();   

    //recursive call 
    solve(inputStack, count+1, size);

    inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int N){
    int count =0 ;
    solve (inputStack, count, N);
}