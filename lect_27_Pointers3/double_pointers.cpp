#include<iostream>
using namespace std;
int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;

    cout<<"Everythings fine"<<endl;

    cout<<"Address of p "<<p<<endl;
    cout<<"Value at address of p "<<*p<<endl;
    cout<<"Address of p2 "<<p2<<endl;
    cout<< "Accesing i via p2 "<<**p2<<endl;
    cout<<"Value at address of p2 "<<*p2<<endl;
}