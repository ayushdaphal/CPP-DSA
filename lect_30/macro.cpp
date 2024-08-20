#include<iostream>
using namespace std;
#define PI 3.14 //this is a macro

int main(){

    int r=5;
    double area =PI*r*r;
    cout<<"Area is "<<area<<endl;
    return 0;
}

//code compile hone se pehle... the placesss where PI(macro) is return will be replaced by 3.14
// we are not using a pi variable and declaring it as 3.14 ...bcoz it will take some amt of memory space in the program

// hw- read this - https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/ 