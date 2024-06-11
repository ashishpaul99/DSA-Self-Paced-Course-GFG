// 1. Naive solution
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int maxSubArray(int arr[], int n)
// {
//     int maxSubArray=arr[0];
//     for(int i=0;i<n;i++){
//         int currentMax=0;
//         for(int j=i;j<n;j++){
//            currentMax=currentMax+arr[j];
//            maxSubArray=max(maxSubArray,currentMax);
//         }
//     }
//     return maxSubArray;

    
// }

// int main()
// {
//   int arr[]={1,-2,3,-1, 2};
//   int n=5;
//   int res=maxSubArray(arr,n);
//   cout<<res<<endl;

// }

// Output:
// 4

// 2. Efficient Solution
#include <iostream>
#include <algorithm>
using namespace std;
int maxSubArray(int arr[], int n)
{
   int maxSumSubarray=arr[0];
   int maxEnding=arr[0];
   for(int i=1;i<n;i++){
       maxEnding=max(maxEnding+arr[i],arr[i]);
       maxSumSubarray=max(maxEnding,maxSumSubarray);
   }
   return maxEnding;

}

int main()
{
  int arr[]={-5,1,-2,3,-1,2,-2}; int n=7;
  //  int arr[]={8,-4,3,-5,4}; int n=5;
  int res=maxSubArray(arr,n);
  cout<<res<<endl;

}

// Output:
