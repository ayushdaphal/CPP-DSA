 #include<iostream>
using namespace std;
 int main(){
    int a,b;

    cout<<"Enter the number a "<<endl;
    cin>>a;

     cout<<"Enter the number b"<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation"<<endl;
    cin>>op;  

    switch(op){
        case '+': cout<<(a+b)<<endl;
                break;
        case '-': cout<<(a-b)<<endl;
                break;
        case '*': cout<<(a*b)<<endl;
                break;
        case '/': cout<<(a/b)<<endl;
                break;
        default: cout<<"Enter a valid operation"<<endl;

    }
    cout<<endl;
 }
