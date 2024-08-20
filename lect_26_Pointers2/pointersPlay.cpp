#include<iostream>
using namespace std;
int main() {
    int arr[10]={2,5,6};
    /*
     cout<<"Address-->"<<arr<<endl;
    cout<<"Adress-->"<<&arr[0]<<endl;

    //value at arr[0]
    cout<<"4th -->"<<*arr<<endl;
    cout<<"4th+1-->"<<*arr+1<<endl;
    cout<<"value-->"<<*(arr+1)<<endl;
    return 0;

     arr[i]=*(arr+i) 
     i[arr]=*(i+arr)--> It will not show any error */
   int temp[10];
   cout<<sizeof(temp)<<endl;

   int *ptr=&temp[0];
   cout<<sizeof(ptr)<<endl;
}