//Palindrome example abba, ayuuya, nitin

#include<iostream>
using namespace std;
bool checkPalindrome(string str, int i, int j){
    //base case 
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        //recursive call
        return checkPalindrome(str,i+1,j-1);
    }

}
int main(){
    string name="abcba";
    cout<<endl;
    bool isPalindrome=checkPalindrome(name, 0, name.size()-1);

    if(isPalindrome){
        cout<<"IT is palindorme"<<endl;
    }
    else{
        cout<<"It is not palindrome"<<endl;
    }



    return 0;
}