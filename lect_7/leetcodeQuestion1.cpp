//reversing a given integer if it is in the range of int (if not return 0)

#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int n;
    cout<<"Enter number n"<<endl;
    cin>>n;
    int digit;
    int ans=0;

    while(n!=0){
        digit=n%10;
        if( ans>INT_FAST32_MAX/10 || ans<INT_FAST32_MIN/10){
        ans= 0;
        }else
        {
        ans=(ans*10)+digit;
        n=n/10;
        }
    }

    cout<<"Reverse of the given number is "<<ans<<endl;


}