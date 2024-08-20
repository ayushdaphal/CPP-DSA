#include<iostream>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }

    //recursive relation 
    int smallerProblempower= power(n-1);
    int biggerProblem = 2*smallerProblempower;
    return biggerProblem;
}

int main(){

    int n;
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl;
    return 0;
}