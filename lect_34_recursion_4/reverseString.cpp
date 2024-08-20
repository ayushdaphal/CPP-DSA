#include<iostream>
using namespace std;
     
void reverse(string& str,int i, int j){
    //bse case
    if(i>j){
        return;
    }

    swap(str[i],str[j]);
        i++;
        j--;
    
    //recursive call
    reverse(str,i,j);

}

int main(){

    string  name="babbar";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;
    return 0;
}


//Question link 
//https://www.codingninjas.com/studio/problems/reverse-the-string_799927?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_13