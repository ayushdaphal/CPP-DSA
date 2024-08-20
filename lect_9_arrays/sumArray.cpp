#include <iostream>
using namespace std;

int getSum(int array[100], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = array[i] + sum;
       
    }
     return sum;
}

int main()
{
    int size;
    int array[100];
    int sum = 0;

    cout << "Enter the size of the array" << endl;
    cin >> size;

    cout << "Enter the elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout << "The sum of the array is " << getSum(array, size) << endl;
}