//creating a 2d array using dynamic memory allocation 
// taking inputs accordingly
//Printing the 2d array

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the no. of rows "<<endl;
    cin>>row;

    int col;
    cout<<"Enter the no. of cols"<<endl;
    cin>>col;

    int ** arr=new int *[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    // 2d array creation done

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>> arr[i][j];
    }
}

//input done
cout<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<< arr[i][j]<<" ";
    }
    cout<<endl;
}

//output done

// releasing memory
for(int i=0;i<row;i++){
        delete []arr[i];
    }

    delete[] arr; 


    return 0;
}