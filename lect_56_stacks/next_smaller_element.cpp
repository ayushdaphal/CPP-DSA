//find the next smaller element to the element in array
// if it doesnt exist print -1

#include<iostream>
#include<stack>
#include <vector>
using namespace std;  


//Approach 1:- 
// input array [2,1,4,3]
// worst case --> No. of comparisons (n-1) for first element 
//                                   (n-2) for second element and so on ....
//TC--> O(n^2)


//Approach 2:- TC --> O(n)
//             Use stack for this
//             Store -1 in stack .. and then push elements from right to left in the array
//             compare the elements at the stack top with the current element 


vector<int> nextSmallerElement(vector<int> &arr, int n){

    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i=n-1; i>=0; i--){
        int curr=arr[i];
        while(s.top()>= curr){
            s.pop();
        }
        ans[i]= s.top();
        s.push(curr);
    }
    return ans;
}