#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;

    //address of Operator -->&
    //Address will be in hexadecimal format 
    cout<<"Address of num is-->"<<&num<<endl;

    int *p=&num;
    cout<<"value of p is -->"<<*p<<endl;
    cout<<"address of num is -->"<<p<<endl;

    //the datatype of the pointer will be the same as the datatype of the variable
char ch;
cout<<"enter a char"<<endl;
cin>>ch;
char *c =&ch;
cout<<"The value of c is "<<c<<endl;

    return 0;
} 