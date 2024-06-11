// 1. Naive approach
// #include<iostream>
// using namespace std;
// int MaximumCircularSumSubarray(int arr[],int n){
//     int res=arr[0];
//     for(int i=0;i<n;i++){
//         int currentMax=arr[i];
//         int currentSum=arr[i];
//         for(int j=1;j<n;j++){
//            int index=(i+j)%n;
//            currentSum=currentSum+arr[index];
//            currentMax=max(currentSum,currentMax);
//         } 
//         res=max(res,currentMax) ;
//     }
//     return res;



// // alter:
//     int maxSum=0;
//     for(int i=0;i<n;i++){
//         int currentSum=0;
//         for(int j=0;j<n;j++){
//            int index=(i+j)%n;
//            currentSum=currentSum+arr[index];
//            maxSum=max(currentSum,maxSum);
//         }    
//     }
//     return maxSum;
// }
// int main(){
    
//     int arr[]={5,-2,3,4}; int n=4;   //Output:12
    // // int arr[]={8,-4,3,-5,4}; int n=5;  //Output:12
    // // int arr[]={2,3,-4}; int n=3;       //Output:5
    // int arr[]={-8,7,6}; int n=3;       //Output:13

      
//       int res=MaximumCircularSumSubarray(arr,n);
//       cout<<res<<endl;
// }

// alter:
// #include<iostream>
// using namespace std;
// int maxCirSubarraySum(int arr[],int n){
    
//     int maxSum=arr[0];
//     for(int i=0;i<n;i++){
//         int currentSum=arr[i];
//         for(int j=1;j<n;j++){
//             int index=(i+j)%n;
//             // kadanes algo 
//             currentSum=max(arr[index],currentSum+arr[index]);

//             maxSum=max(maxSum,currentSum);
//         }
        
//     }
//     return maxSum;

// }
// int main(){
//   int arr[]={5,-2,3,4};
//   int n=4;
//   int res=maxCirSubarraySum(arr,n);
//   cout<<res<<endl;
// }

// Output:12

    

// 2. Efficient solution
// #include<iostream>
// using namespace std;
// int MaximumCircularSumSubarray(int arr[],int n){
//     int res=arr[0];
//     for(int i=0;i<n;i++){
//         int currentMax=arr[i];
//         int currentSum=arr[i];
//         for(int j=1;j<n;j++){
//            int index=(i+j)%n;
//            currentSum=currentSum+arr[index];
//            currentMax=max(currentSum,currentMax);
//         } 
//         res=max(res,currentMax) ;
//     }
//     return res;

// }
// int main(){
    
//     // int arr[]={5,-2,3,4}; int n=4;   //Output:12
//       int arr[]={-8,7,6}; int n=3;       //Output:13

//     int res=MaximumCircularSumSubarray(arr,n);
//     cout<<res<<endl;
// }

// 2. Efficient solution
#include<iostream>
using namespace std;
int MaximumCircularSumSubarray(int arr[],int n){

    int maxEnding=arr[0];
    int maxSumNormalSubarray=arr[0];
    int minEnding=arr[0];
    int minSumNormalSubarray=arr[0];

    // Finding maximum and minimum Sum normal subarray
    for(int i=1;i<n;i++){
        maxEnding=max(maxEnding+arr[i],arr[i]);
        maxSumNormalSubarray=max(maxEnding,maxSumNormalSubarray);

        minEnding=min(minEnding+arr[i],arr[i]);
        minSumNormalSubarray=min(minEnding,minSumNormalSubarray);
    }

    // finding sum of array

    int arraySum=arr[0];
    for(int i=1;i<n;i++){
        arraySum=arraySum+arr[i];
    }

    // finding maximum sum circular sub array
    int maxSumCircularSubarray=arraySum-minSumNormalSubarray;

    // finding maximum of maximum sum normal subarray and maximum sum circular subarray
    int maxSum=max(maxSumNormalSubarray,maxSumCircularSubarray);
    return maxSum;

    
}
int main(){
    
    int arr[]={5,-2,3,4}; int n=4;   //Output:12
    //  int arr[]={-5,-1,-3,-6}; int n=4;   
    // int arr[]={8,-4,3,-5,4}; int n=5;  //Output:12
    // int arr[]={2,3,-4}; int n=3;       //Output:5
    // int arr[]={-8,7,6}; int n=3;       //Output:13
    int res=MaximumCircularSumSubarray(arr,n);
    cout<<res<<endl;
}

// Output:
// 12



