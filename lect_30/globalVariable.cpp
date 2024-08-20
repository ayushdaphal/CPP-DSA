#include <iostream>
using namespace std;

int score = 15; // global variable
void a(int &i)
{ //&i  reference variable
    cout << score << endl;
}

int main()
{
    int i = 5;
    cout << "Sum of score and i " << score + i << endl;
    a(i);

    return 0;
}

// ref variable is used to share value of a variable in multiple functions
// another method is to use a global variable --> it is a bad practice to use a global variable (It can be changed by any function-- it will be changed for the other functions as well)