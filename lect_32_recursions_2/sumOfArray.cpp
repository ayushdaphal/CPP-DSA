//homework question

#include<iostream>
using namespace std;
void print(int arr[], int size){
     for(int j=0; j<size;j++){
        cout<< arr[j]<<" "<<endl;
    }
    

}

int sum(int arr[], int size){
        //base case
        if(size==0){
            return 0;
        }

        int ans=arr[0]+sum(arr+1, size-1);
        return ans;
}

int main(){
    int size;
    int arr[50];
    cout<<"enter the size of arr (<50)"<<endl;
    cin>>size;

    cout<<"Enter the elements of the array"<<endl;
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }

    
    cout << "The array is: ";
    print(arr, size);
    
    cout<<"the sum of the given array is "<<sum(arr,size)<<endl;

    return 0;

}