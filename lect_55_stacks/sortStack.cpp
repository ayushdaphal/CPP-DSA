#include<iostream>
#include<stack>
using namespace std;  

// sort a stack (without a loop) --> i/p stack  5, -2, 9, -7, 3
//                                   o/p stack  -7, -2, 3, 5, 9
            

void sortedInsert(stack <int> &s, int num){
    //base case 
    if (s.empty() ||(!s.empty() && s.top()<num)){
        s.push(num);
    }

    int n=s.top();
    s.pop();

    //recursive call
    sortedInsert(s,num);
    s.push(n);

}

void sortStack(stack <int> &stack){
      //base case 
      if(stack.empty()){
        return ;
    }   
    int num= stack.top();

    //recursive call
    sortStack(stack);

    sortedInsert(stack, num);
}