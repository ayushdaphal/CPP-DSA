// Calculating nCr of give numbers n and r 

#include<iostream>

using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int ncr(int n, int r) {
    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);
    int ans = num / denom;
    return ans;
}

int main() {
    int n, r;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of r: ";
    cin >> r;

    cout << "Answer is: " << ncr(n, r) << endl;
}
