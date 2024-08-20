// To tell whether a given number is prime or not

#include<iostream>
using namespace std;
int main() {
    int n;
cout<<"Enter n"<<endl;
cin>>n;
bool isPrime=1;

for(int i=2;i<n;i++){
    if (n%i == 0){
        cout<<"Not a prime number"<<endl;
        isPrime=0;
        break;
    }
    
}
if(isPrime==0){
    cout<<"Not a prime numbrer"<<endl;
}else {
    cout<<"Is a prime Number"<<endl;
}
    
} 
