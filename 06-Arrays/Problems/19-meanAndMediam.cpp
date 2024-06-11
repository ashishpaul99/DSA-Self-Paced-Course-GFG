// Problem Link: https://www.geeksforgeeks.org/batch/dsa-4/track/DSASP-Arrays/problem/mean-and-median-1587115620
// 3. Mean And Median of Array

#include <iostream>
#include <algorithm>

using namespace std;

int median(int arr[], int n)
{
    int medianValue;
    sort(arr, arr + n);
    if (n % 2 == 0)
    {
        medianValue = ((arr[n / 2] + arr[(n / 2) - 1]) / 2);
    }
    else
    {
        medianValue = (arr[n / 2]);
    }

    return medianValue;
}

int mean(int arr[], int n)
{
    int sum = 0;
    int meanValue;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        meanValue = (sum / n);
    }
    return meanValue;
}

int main()
{
    int arr[] = {1, 2, 19, 28, 5};
    int n = 5;
    int med = median(arr, n);
    int mea = mean(arr, n);
    cout << "median:" << med << endl;
    cout << "mean:" << mea << endl;
}

// Output:
// median:5
// mean:11