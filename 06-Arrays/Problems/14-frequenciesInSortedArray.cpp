// 14- Frequencies in a Sorted Array

// 1. Naive Approach
// #include <iostream>
// using namespace std;

// void freqInArray(int arr[], int n) {
//     for (int i = 0; i < n; ++i) {
//         int count = 1;
//         if (arr[i] == -1) {
//             continue; // Skip this element as it is already counted
//         }
//         for (int j = i + 1; j < n; ++j) {
//             if (arr[j] == arr[i]) {
//                 count++;
//                 arr[j] = -1; // Mark this element as counted
//             }
//         }
//         cout << arr[i] << " occurs " << count << " times." << endl;
//     }
// }

// int main() {
//     int arr[]={10,10,10,25,30,30};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     freqInArray(arr, n);

//     return 0;
// }

// 2. Effective soltion
#include <iostream>
using namespace std;
void freqArray(int arr[], int n)
{
    int i = 1;
    int freq = 1;
    while (i < n)
    {
        while (arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq<<endl;
        freq = 1;
        i++;
    }
}
int main()
{
    int arr[] = {10, 10, 10, 25, 30, 40};
    int n = 7;
    freqArray(arr, n);
}

// =>Alter
// #include<iostream>
// using namespace std;
// void freqInArray(int arr[],int n){

// //    handling empty array case
//  if(n==0) return ;
// //  handlinf array with one element case
// if(n==1) {
//     cout<<arr[0]<<" "<<"1"<<endl;
// }

// int freq=1;
// for(int i=1;i<n;i++){

//     if(arr[i]==arr[i-1]){
//         freq++;
//     }else{
//         cout<<arr[i-1]<<" "<<freq<<endl;
//         freq=1;
//     }

// }

// // printing frequency of last element
//  cout<<arr[n-1]<<" "<<freq;

// }
// int main(){
//     int arr[]={10,10,10,25,30,30};
//     int n=6;
//     freqInArray(arr,n);
// }
