//reference variable--> Same memory location with two different names
#include<iostream>
using namespace std;

int main(){
    int i=5;
    //creating a ref variable
    int& j=i;
    cout<<"i "<<i<<endl;
    cout<<"j "<<j<<endl;
    i++;

    cout<<"i "<<i<<endl;
    cout<<"j "<<j<<endl;
    j++;

    cout<<"i "<<i<<endl;
    cout<<"j "<<j<<endl;


    return 0;
}