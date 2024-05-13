// 1. Navie Solution

// 1. Naive Approach 
// ->it takes θ(n*d) times
// ->Axuliary Space θ(1)  - extra array is not used.

// #include<iostream>
// using namespace std;
// void leftRotateBy1(int arr[],int n){
//    int temp=arr[0];
//    for(int i=0;i<n;i++){
//      arr[i-1]=arr[i];
//    }
//    arr[n-1]=temp;
// }
// void leftRotateByd(int arr[],int n,int d){
//    for(int i=0;i<d;i++){
//       leftRotateBy1(arr,n);
//    }

//    for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//    }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int d=1;
//     leftRotateByd(arr,n,d);

// }

// Output:
// 2 3 4 5 1 

// Alter-1:
// #include<iostream>
// using namespace std;

// void leftRotateByd(int arr[],int n,int d){
//    for(int i=0;i<d;i++){
//       int temp=arr[0];
//       for(int i=0;i<n;i++){
//          arr[i-1]=arr[i];
//      }
//      arr[n-1]=temp;
//    }

//    for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//    }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int d=3;
//     leftRotateByd(arr,n,d);

// }

// Output:4 5 1 2 3 

// 2. Better Solution
// -> it takes θ(n) time
// -> Auxialiary θ(d)

// #include <iostream>
// using namespace std;
// void leftRotateByd(int arr[], int n, int d)
// {
//     int temp[d];
//     // Copy the first 'd' elements to the temporary array
//     for(int i = 0; i < d; i++) {
//         temp[i] = arr[i];
//     }

//    // Shift the remaining elements of 'arr[]' to the left
//     for(int i = d; i < n; i++) {
//         arr[i - d] = arr[i];
//     }

//    // Copy the elements from the temporary array to the end of 'arr[]'
//     for(int i = 0; i < d; i++) {
//         arr[n - d + i] = temp[i];
//     }

//     // Print the rotated array
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;
//     int d = 3;
//     leftRotateBy1(arr, n, d);
// }

// Output:
// 3 4 5 1 2


// 3. Efficient soltion(reverse algorithm)
// #include<iostream>
// using namespace std;
// void reverse(int arr[],int low,int high){
//     while(low<high){
//         swap(arr[low],arr[high]);
//         low++;
//         high--;
//     }
// }
// void rotateByd(int arr[],int n,int d){
//     reverse(arr,0,d-1);
//     reverse(arr,d,n-1);
//     reverse(arr,0,n-1);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     int d=2;
//     int low=0;
//     int high=n-1;
//     rotateByd(arr,n,d);
// }

// Output:
// 3 4 5 1 2 

// alter- Effcient solution
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> leftRotateBy1( vector<int>arr,int d){
//     int n=arr.size();
//     vector<int> a(n);

//     for(int i=0;i<n;i++){
//         a[i]=arr[(i+d)%n];

//     }

//     arr=a;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }

// }
// int main(){
//     vector<int> arr={1,2,3,4,5};
//     int d=2;
//     leftRotateBy1(arr,d);
// }

// Output:
// 1 2 3 4 5