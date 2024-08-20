//Find the difference between the product and the sum of the digits of a number

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number n"<<endl;
    cin>>n;

    int sum=0;
    int prod=1;
        while(n!=0){
                int digit = n%10;
                prod=prod*digit;
                sum=sum+digit;
                n=n/10;
        }

        int result= prod-sum;
        cout<<"result-->"<<result<<endl;
}