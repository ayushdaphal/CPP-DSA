// // Power of 2
// If you can represent a number as a power of 2
// Print true else false

#include <iostream>
#include <math.h>
using namespace std;
bool isAssigned;
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    for (int i = 0; i < 31; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            isAssigned = true;
        }
        else
        {
            isAssigned = false;
        }

        
    }
    cout<<isAssigned<<endl;
}
