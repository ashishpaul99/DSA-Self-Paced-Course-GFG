// 12. Maximum Difference Problem with Order
// 1. Naive approach
// ->it takes O(n^2) time
// ->O(1) Auxliary space

#include <iostream>
#include <limits.h>
using namespace std;
void maximumDiff(int arr[], int n)
{
    int maxDiff=arr[1]-arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i]>maxDiff){
                maxDiff=arr[j]-arr[i];
            }
        }
    }

    cout<<maxDiff<<endl;
    
}
int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1},n = 7;//Output:8
    // int arr[]={7,9,5,6,3,2},n=6;   //Output:2
    // int arr[]={10,20,30},n=3;  // output:20
    // int arr[]={30,10,8,2},n=4; // Output:-2
    maximumDiff(arr, n);
}

// => Alter(My solution)

#include <iostream>
#include <limits.h>
using namespace std;
void maximumDiff(int arr[], int n)
{
    int maximumDiffValue = INT_MIN;
    int diff;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            diff = arr[j] - arr[i];
            if (diff > maximumDiffValue)
            {
                maximumDiffValue = diff;
            }
        }
    }
    cout << maximumDiffValue<< endl;
}
int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1},n = 7;//Output:8
    // int arr[]={7,9,5,6,3,2},n=6;   //Output:2
    // int arr[]={10,20,30},n=3;  // output:20
    // int arr[]={30,10,8,2},n=4; // Output:-2
    maximumDiff(arr, n);
}

// 2. Efficient soltion
// ->it takes O(n) time
// -> it takes O(1) auxiliary space

#include <iostream>
#include <limits.h>
using namespace std;
void maximumDiff(int arr[], int n)
{
   int maxDiff=arr[1]-arr[0];
   int min=arr[0];
   for(int i=1;i<n;i++){
    if(arr[i]-min>maxDiff){
        maxDiff=arr[i]-min;
    }
    if(arr[i]<min){
        min=arr[i];
    }
   }

   cout<<maxDiff<<endl;
    
}
int main()
{
    // int arr[] = {2, 3, 10, 6, 4, 8, 1},n = 7;//Output:8
    // int arr[]={7,9,5,6,3,2},n=6;   //Output:2
    // int arr[]={10,20,30},n=3;  // output:20
    // int arr[]={30,10,8,2},n=4; // Output:-2
    maximumDiff(arr, n);
}

// alter:
#include <iostream>
#include <limits.h>
using namespace std;
void maximumDiff(int arr[], int n)
{
   int maxDiff=arr[1]-arr[0];
   int minElement=arr[0];
   for(int i=1;i<n;i++){
     maxDiff=max(maxDiff,arr[i]-minElement);
     minElement=min(minElement,arr[i]);
    
   }

   cout<<maxDiff<<endl;
    
}
int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1},n = 7;//Output:8
    // int arr[]={7,9,5,6,3,2},n=6;   //Output:2
    // int arr[]={10,20,30},n=3;  // output:20
    // int arr[]={30,10,8,2},n=4; // Output:-2
    maximumDiff(arr, n);
}
// Output:
// 8

