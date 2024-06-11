// 23 Majority Element
// 1. Naive Appraoch

// #include<iostream>
// using namespace std;
// int majorityElement(int arr[],int n){
    
//       for(int i=0;i<n;i++){
//         int count=1;
//         for(int j=i+1;j<n;j++){
//              if(arr[i]==arr[j]){
//                 count++;
//              } 
//         }
//         if(count>(n/2)){
//             return i;
//         }
//       }
//       return -1;
// }

// int main(){
//     // int arr[]={7,8,5,8,5};
//     int arr[]={20,30,40,50,50,50,50};
//     int n=7;
//     int ans=majorityElement(arr,n);
//     cout<<ans<<endl;

// }

// 2. Effective approach
#include<iostream>
using namespace std;
int majorityElement(int arr[],int n){
    
    // Selecting majority element
    int elementIndex=0, count=1;
    for(int i=1;i<n;i++){
        if(arr[elementIndex]==arr[i]){
            count++;
        }else{
            count--;
        }

        if(count==0){
            elementIndex=i;
            count=1;
        }
    }


    // checking wheather it is major element or not
    int countCheck=0;
    for(int i=0;i<n;i++){
        if(arr[elementIndex]==arr[i]){
            countCheck++;
        }
    }
    if(countCheck>(n/2)){
        return elementIndex;
    }

    return -1;
}

int main(){
    // int arr[]={7,8,5,8,5};
    int arr[]={7,6,7,7,6,6};
    int n=6;
    int ans=majorityElement(arr,n);
    cout<<ans<<endl;

}