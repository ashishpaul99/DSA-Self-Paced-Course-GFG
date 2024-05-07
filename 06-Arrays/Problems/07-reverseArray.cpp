// 4. Reverse An Array
// #include<iostream>
// using namespace std;
// void reverseArray(int arr[],int n){
//       int i=0,j=n-1;
//       while(i<=j){
//          // swap(arr[i],arr[j]);
//          int temp=arr[i];
//          arr[i]=arr[j];
//          arr[j]=temp;

//          i++;
//          j--;
//       }

//       for(int i=0;i<n;i++){
//          cout<<arr[i]<<" ";
//       }
// }
// int main(){
//    int arr[]={10,20,30,40,50};
//    int n=5;
//    reverseArray(arr,n);
// }

// Output:50 40 30 20 10

// Alternative-1: Using swap in built function
// #include<iostream>
// using namespace std;
// void reverseArray(int arr[],int n){
//       int i=0,j=n-1;
//       while(i<=j){
//          swap(arr[i],arr[j]);
//          i++;
//          j--;
//       }

//       for(int i=0;i<n;i++){
//          cout<<arr[i]<<" ";
//       }
// }
// int main(){
//    int arr[]={10,20,30,40,50};
//    int n=5;
//    reverseArray(arr,n);
// }

// Output:50 40 30 20 10