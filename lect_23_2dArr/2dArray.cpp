#include<iostream>
using namespace std;


bool isPresent(int arr[][4], int target, int row, int col){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
           if(arr[i][j]== target){
            return true;
           }else{
            return false;
           }
        }
    }

}

int main(){
    int arr[3][4];
    cout<<"Enter the elements of 2d array"<<endl;
    //row wise input
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element to be searched"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr, target, 3, 4))
        cout<<"Element found"<<endl;
    else{
        cout<<"Not present"<<endl;
    }
    return 0;
 
}