#include<iostream>
#include<stack>

using namespace std; 


int main(){
    stack<int>s;

    s.push(2);
    s.push(3);
    s.push(4);

    s.pop();

    cout<<"Top is-->"<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack empty"<<endl;
    }else{
        cout<<"Stack not empty"<<endl;
    }

    cout<<"size is "<<s.size()<<endl;
}