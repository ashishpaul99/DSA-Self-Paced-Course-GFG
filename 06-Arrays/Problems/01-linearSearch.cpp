// 1. Searching element in an array(unsorted) ->Linear search
#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n = 6;
    int arr[] = {1, 2, 3, 5, 4, 6};
    int key = 2;
    int res = linearSearch(arr, n, key);
    cout << res << endl;
}

// Output:
// 1