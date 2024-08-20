//binary search in an array

 #include<iostream>
 using namespace std;

 int binarySearch(int arr[], int size, int key){
    int start=0;
    int end= size-1;

    int mid= start +(end-start)/2;
    while(start<=end){
         
         if(arr[mid]==key){
            return mid;
         }else if(key> arr[mid]){
            start=mid+1;
         }else if(key<arr[mid]){
             end=mid-1;
         }
         mid= start +(end-start)/2;
    }
    return -1;
 }

 int main(){
        int even[6]={1,2,3,4,5,6};
        int odd[5]={3,8,11,14,16};

        int evenIndex= binarySearch(even, 6, 4);
        cout<<"Element 4 found at index "<<evenIndex<<endl;

        int oddIndex= binarySearch(odd, 5, 16);
        cout<<"Element 16 found at index "<<oddIndex<<endl;
        


 }