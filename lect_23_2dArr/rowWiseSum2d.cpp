#include<iostream>
using namespace std;

void printSum(int arr[][4], int row, int col){
    cout<<"Printing row wise sum"<<endl;
     for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum=arr[i][j]+sum;
            
        }
        cout<<sum<<" "<<endl;
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
    cout<<"Printing the array"<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printSum(arr, 3, 4);

    return 0;
}