// Finding the first and the last occurence of a element in an array using Binary Search

#include <iostream>

using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int m = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[m] == key)
        {
            ans = m;
            e = m - 1;
        }
        else if (arr[m] < key)
        {
            s = m + 1;
        }
        else if (arr[m] > key)
        {
            e = m - 1;
        }

        m = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int m = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[m] == key)
        {
            ans = m;
            s = m + 1;
        }
        else if (arr[m] < key)
        {
            s = m + 1;
        }
        else if (arr[m] > key)
        {
            e = m - 1;
        }

        m = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[5] = {1, 2, 3, 3, 3};
    cout << "First Occurence is at index " << firstOcc(arr, 5, 3) << endl;
    cout << "Last Occurence is at index " << lastOcc(arr, 5, 3) << endl;

    return 0;
}