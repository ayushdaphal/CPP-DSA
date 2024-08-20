#include<iostream>
using namespace std;

int pivot(int arr[], int n){
int s=0, e=n-1;
int m=s+(e-s)/2;
int suml=0;
int sumr=0;
int ans=-1;

while(s<e){

     for (int i = 0; i < m; i++) {
            suml += arr[i];
        }

        for (int j = m + 1; j <= e; j++) {
            sumr += arr[j];
        }

        if(suml == sumr){
          ans= m;
          break;

        }else if(suml<sumr){
            s=m;

        }else if(suml> sumr){
            e=m-1;

        }
        m=s+(e-s)/2;
}

return ans;

}

int main(){
    int arr[6]={1,2,3,0,1,5};
    cout<<"The pivot index in the array is"<< pivot(arr,6) <<endl;
}
