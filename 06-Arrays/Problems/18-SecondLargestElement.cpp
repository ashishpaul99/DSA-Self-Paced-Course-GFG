Problem Link : https://www.geeksforgeeks.org/problems/second-largest3735/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article


// 1. Naive Approach
// #include <iostream>
// #include <limits.h>
// using namespace std;
// int largest(int arr[], int n)
// {
//     int max=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max;
    
// }

// int secondLargest(int arr[],int n){
    
//     int max=largest(arr, n);
//     int secondMax=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]!=max){
//            if(arr[i]>secondMax){
//             secondMax=arr[i];
//            }  
//         }   
//     }
//     return secondMax;
// }
// int main()
// {
//     int arr[] = {34, 8, 90, 3, 2, 80, 30, 33, 1};
//     int n = 9;
//     int res = secondLargest(arr, n);
//     cout << res << endl;
// }


// 2. Efficient Approach
#include <iostream>
#include <limits.h>
using namespace std;
int secondLargest(int arr[], int n)
{
    int max=INT_MIN;
    int secondMax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secondMax=max;
            max=arr[i];
            
        }else if(arr[i]!=max){
           if(arr[i]>secondMax || secondMax==INT_MIN){
              secondMax=arr[i];
           }  
        }   
    }
    if(secondMax==INT_MIN){
        return -1;
    }
    return secondMax;
}
int main()
{
    int arr[] = {10,10,20};
    int n = 3;
    int res = secondLargest(arr, n);
    cout << res << endl;
}
// Output:
// 10

