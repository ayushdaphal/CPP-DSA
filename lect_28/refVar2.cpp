// in a method when we pass a value or a parameter by its name, it creates an copy of the same in the method
// but when you pass the parameter , it is not the copy which is made in the function

#include <iostream>
using namespace std;

//pass by value
void update1(int n)
{
    n++;
}

//pass by reference
void update2(int& n)
{
    n++;
}

int main()
{
    int n = 5;
    cout << "Update using value" << endl;
    update1(n);
    cout << n << endl;

    cout << "Update using reference" << endl;
    update2(n);
    cout << n << endl;

    return 0;
}