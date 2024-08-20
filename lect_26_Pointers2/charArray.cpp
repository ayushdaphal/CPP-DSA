#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;
    cout << ch << endl;
    /* For a integer array and char array the cout function is implemented differently
    In case of char it prints the entire array */

    char *c = &ch[0];
    // prints the entire string
    cout << c << endl;
   
    // new case
    char temp= 'z';
    char *p=&temp;
    cout<<p<<endl;
     return 0;
}   