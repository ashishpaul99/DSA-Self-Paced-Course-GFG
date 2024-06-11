// Problem Link : https://www.geeksforgeeks.org/problems/maximum-index-1587115620/1
// 1. Effienct Solution
#include <iostream>
#include <limits.h>
using namespace std;
int maxIndexDiff(int a[], int n)
{
    // Your code here
    int rightMax[n];
    rightMax[n - 1] = a[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], a[i]);
    }

    int maxDiffIndex = INT_MIN;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        if (a[i] <= rightMax[j])
        {
            maxDiffIndex = max(maxDiffIndex, j - i);
            j++;
        }
        else
        {
            i++;
        }
    }

    return maxDiffIndex;
}
int main()
{
    int arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    int n = 9;
    int res = maxIndexDiff(arr, n);
    cout << res << endl;
}

// Output:6

// 2. Naive Approach
// int maxDiffIndex=0;
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(a[i]<=a[j]){

//             maxDiffIndex=max(maxDiffIndex,j-i);
//         }
//     }

// }
// return maxDiffIndex;