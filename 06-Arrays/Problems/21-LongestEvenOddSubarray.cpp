//1. Naive solution
#include<iostream>
using namespace std;
int longestEvenOddSubarray(int arr[],int n){

    
    int maxLength=1;
    for(int i=0;i<n;i++){
        int length=1;
        for(int j=i+1;j<n;j++){
            if(arr[j]%2==0 && arr[j-1]%2!=0 || arr[j] %2!=0 && arr[j-1]%2==0){
                    length++;
           }else{
                break;
           }

        }
        maxLength=max(maxLength,length);
        
    }
    return maxLength; 

}
int main(){
    // int arr[]={10,1,4,7,8}; int n=5;
    // int arr[]={7,10,13,14}; int n=4;
    // int arr[]={10,12,8,4}; int n=4;
      int arr[]={5,10,20,6,3,8}; int n=6;
     
    int res=longestEvenOddSubarray(arr,n);
    cout<<res<<endl;
}



// 2. Efficient Solution
// #include<iostream>
// using namespace std;
// int longestEvenOddSubarray(int arr[],int n){

//     int length=1;
//     int maxLength=1;
//     for(int i=1;i<n;i++){
//         if(arr[i]%2==0 && arr[i-1]%2!=0 || arr[i]%2!=0 && arr[i-1]%2==0){
//             length++;
//             maxLength=max(maxLength,length);
//         }else{
//             length=1;
//         }
//     }
//     return maxLength; 

// }
// int main(){
//     int arr[]={10,1,4,7,8}; int n=5;
//     // int arr[]={7,10,13,14}; int n=4;
//     // int arr[]={10,12,8,4}; int n=4;
     
//     int res=longestEvenOddSubarray(arr,n);
//     cout<<res<<endl;
// }