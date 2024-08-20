#include<iostream>
using namespace std;

// 2 stacks in one array

// approach: stack 1 insertion left to right 
//           stack 2 insertion right to left 

class Stack
{
    // properties
public:
    int top1, top2;
    int *arr;
    int s;

Stack(int s)
    {
        this->s = s;
        arr = new int[s];
        top1 = -1;
        top2 = s;
        arr= new int[s];
    }

    void push1(int num){
        //ensures atleast 1 empty space
        if (top2-top1>1){
            top1++;
            arr[top1]=num;
        }else{
            cout<<"Stack overflow"<<endl;
        }
    }

       void push2(int num){
        //ensures atleast 1 empty space
        if (top2-top1>1){
            top2--;
            arr[top2]=num;
        }else{
            cout<<"Stack overflow"<<endl;
        }
    }

    int pop1(){
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }else{
            return -1;
        }
    }

     int pop2(){
        if(top2<s){
            int ans=arr[top2];
            top2++;
            return ans;
        }else{
            return -1;
        }
    }

};