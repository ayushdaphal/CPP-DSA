#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
    //base case
    if(size==0){
        return false;
    }

    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingPart=search(arr+1,size-1,key);
        return remainingPart;
    }

}
int main(){
    int arr[5]={3,5,1,2,6};
    int size=5;
    int key=10;

    bool ans=search(arr, size, key);
     
     if(ans){
        cout<<"Element found"<<endl;
     }
     else{
        cout<<"Element Not found"<<endl;
     }


        return 0;
}