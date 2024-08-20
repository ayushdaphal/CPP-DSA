//complement of base 10 integer

// For eg:- if n=5
// in binary n=101
// then complement is 010 i.e 2 

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int m=n;
    cout<<"Enter a number" <<endl;
    cin>>m;
     int mask=0;
    int answer;

     if(n=0){
        answer=1;
     }

     while(m!=0){
        mask= (mask << 1) | 1;
        m=m>>1;
     }
    answer = (~n) & mask;
     cout<<"Complement of base 10-->"<<answer<<endl;
}
