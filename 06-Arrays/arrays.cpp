// Operations on Arrays
// 1. Searching element in an array(unsorted) ->Linear search
// #include<iostream>
// using namespace std;
// int linearSearch(int arr[],int n,int key){
//    for(int i=0;i<n;i++){
//       if(arr[i]==key){
//          return i;
//       }
//    }
//    return -1;
// }
// int main(){
//    int n=6;
//    int arr[]={1,2,3,5,4,6};
//    int key=2;
//    int res=linearSearch(arr,n,key);
//    cout<<res<<endl;

// }

// Output:
// 1

// 2. Inserting element in an array

// Intput -> arr[]->{5,7,10,20,} , pos=2, x=3 , index=1
// Output: arr[]->{5,3,7,10,20}

// #include <iostream>
// using namespace std;

// void insert(int arr[], int& n, int x, int cap, int pos)
// {
//    if (n == cap)
//    {
//       cout << "No space in array" << endl;
//       return;
//    }

//    // Finding the index where we want to insert the element.
//    // Position begins from 1 and index begins from zero
//    int index = pos - 1;

//    // Shifting elements to the right to make space for the new element
//    for (int i = n - 1; i >= index; i--)
//    {
//       arr[i + 1] = arr[i];
//    }
//    arr[index] = x;

//    // Incrementing the size of the array after insertion
//    n++;

//    // Printing the modified array
//    for (int i = 0; i < n; i++)
//    {
//       cout << arr[i] << " ";
//    }
// }

// int main()
// {
//    int cap = 5;
//    int x = 2;
//    int pos = 3;
//    int arr[] = {5, 7, 10, 20};
//    int n = sizeof(arr) / sizeof(arr[0]);

//    insert(arr, n, x, cap, pos);

//    return 0;
// }

// Alternative-1
// #include <iostream>
// using namespace std;

// void insert(int arr[], int& n, int x, int cap, int pos)
// {
//     if (n == cap)
//     {
//         cout << "No space in array" << endl;
//         return;
//     }

//     // Finding the index where we want to insert the element.
//     // Position begins from 1 and index begins from zero
//     int index = pos - 1;

//     // Shifting elements to the right to make space for the new element
//     for (int i = n; i > index; i--)
//     {
//         arr[i] = arr[i - 1];
//     }

//     // Inserting the new element at the specified position
//     arr[index] = x;

//     // Incrementing the size of the array after insertion
//     n++;

//     // Printing the modified array
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int cap = 5;
//     int x = 2;
//     int pos = 3;
//     int arr[] = {5, 7, 10, 20};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     cout << "Array after insertion: ";
//     insert(arr, n, x, cap, pos);
//     cout << endl;

//     return 0;
// }

// Alternative-2
// #include <iostream>
// using namespace std;

// int insert(int arr[], int n, int x, int cap, int pos)
// {
//    if (n == cap)
//    {
//      return n; // No space in the array, return original size
//    }
//    else
//    {
//       // Finding the index where we want to insert the element.
//       // Position begins from 1 and index begins from zero
//       int index = pos - 1;

//       // Shifting elements to the right to make space for the new element
//       for (int i = n - 1; i >= index; i--)
//       {
//          arr[i + 1] = arr[i];
//       }
//       arr[index] = x;
//    }

//    return (n + 1); // Return updated size after insertion
// }

// int main()
// {
//    int cap = 5;
//    int x = 3;
//    int pos = 2;
//    int arr[] = {5, 7, 10, 20};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int res = insert(arr, n, x, cap, pos);
//    cout << res << endl;

//    return 0;
// }

// 3. Deletion operation
// #include<iostream>
// using namespace std;
// int deletion(int arr[],int n,int x,int cap){

//    int index;
//    for(int i=0;i<n;i++){
//       if(arr[i]==x){
//          break; //once element is found no need to continuing searching
//       }
//    }

//    if(index==n){
//       return n; //if element is not found return array size
//    }

//    for(int i=index;i<n-1;i++){
//       arr[i]=arr[i+1];
//    }

//    //return size of the new array after deleting
//    return n-1;

// }
// int main(){
//    int arr[]={3,8,12,5,6};
//    int x=6;
//    int n=sizeof(arr)/sizeof(arr[0]);
//    int cap=n;
//    int res=deletion(arr,n,x,cap);
//    cout<<res<<endl;

// }

// Output:4

// alternative:
// #include<iostream>
// using namespace std;
// void deletion(int arr[],int n,int x,int cap){

//    int index;
//    for(int i=0;i<n;i++){
//       if(arr[i]==x){
//          index=i;
//          break; //once element is found no need to continuing searching
//       }
//    }

//    if(index==-1){
//       cout<<"element not found in array"<<endl;
//       return; // Exit the function if element not found
//    }

//    for(int i=index;i<n-1;i++){
//       arr[i]=arr[i+1];
//    }

//    // Decrement the size
//    n--;
//    for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//    }

// }
// int main(){
//    int arr[]={3,8,12,5,6};
//    int x=6;
//    int n=sizeof(arr)/sizeof(arr[0]);
//    int cap=n;
//    deletion(arr,n,x,cap);

// }

// Problems
// 1. Largest Element in an Array
// #include <iostream>
// using namespace std;

// int largestElement(int arr[], int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       bool flag = true; // Assume arr[i] is the largest element

//       for (int j = 0; j < n; j++)
//       {
//          if (arr[j] > arr[i])
//          {
//             flag = false; // arr[i] is not the largest element
//             break;        // Exit the inner loop
//          }
//       }

//       if (flag == true) // If arr[i] is still considered the largest, return its index
//          return i;
//    }

//    // This line will never be reached if there is always a largest element
//    return -1;
// }

// int main()
// {
//    int arr[] = {2, 1, 10, 4, 60};
//    int n = 5;
//    int res = largestElement(arr, n);
//    cout << res << endl;
//    return 0;
// }

// Output:4

// Alternative-1
// #include <iostream>
// using namespace std;

// void largestElement(int arr[], int n)
// {
//    int max = arr[0]; // Initialize max to the first element of the array

//    for (int i = 1; i < n; i++)
//    {
//       bool isMax = true; // Assume arr[i] is the largest element until proven otherwise

//       for (int j = 0; j < n; j++)
//       {
//          if (arr[j] > arr[i])
//          {
//             isMax = false; // arr[i] is not the largest element
//             break; // Exit the inner loop since we already found a larger element
//          }
//       }

//       if (isMax)
//       {
//          max = arr[i]; // Update max if arr[i] is the largest element
//       }
//    }

//    cout << max << endl; // Output the largest element after the loop completes
// }

// int main()
// {
//    int arr[] = {2, 21, 10, 4, 60};
//    int n = 5;
//    largestElement(arr, n);
//    return 0;
// }

// Output:
// 60

// Alternative-2:
// #include <iostream>
// using namespace std;

// int largestElement(int arr[], int n)
// {
//    for (int i = 0; i < n; i++)
//    {
//       bool flag = true; // Assume arr[i] is the largest element

//       for (int j = 0; j < n; j++)
//       {
//          if (arr[j] > arr[i])
//          {
//             flag = false; // arr[i] is not the largest element
//             break;        // Exit the inner loop
//          }
//       }

//       if (flag == true) // If arr[i] is still considered the largest, return its index
//          return i;
//    }

//    // This line will never be reached if there is always a largest element
//    return -1;
// }

// int main()
// {
//    int arr[] = {2, 1, 10, 4, 60};
//    int n = 5;
//    int res = largestElement(arr, n);
//    cout << res << endl;
// }

// 2. Second Largest Element in Array
// Input  - arr[]={10,5,8,20};
// output - 0 //index of 10

// Input  - arr[]={20,10,20,8,12};
// output - 4 //index of 12

/// Input  - arr[]={10,10,10};
// output - -1//No second largest

// 1. Naive Approach
// ->If second largest element is found then it return index of second largest element.
// ->If second largest element is not found then it returns -1

// #include <iostream>
// #include <limits.h>
// using namespace std;

// int getLargest(int arr[], int n)
// {
//    int largest = 0;
//    for (int i = 0; i < n; i++)
//    {
//       if (arr[i] > arr[largest])
//       {
//          largest=i;
//       }

//    }
//     return largest;

// }
// int secondLargest(int arr[], int n)
// {
//    int largest = getLargest(arr, n);
//    int res=-1; // Initialize to -1 to indicate no second largest found
//    for (int i = 0; i < n; i++)
//    {
//       if (arr[i] != arr[largest])//consider only elements which is not largest
//       {
//          if (res==-1)
//          {
//             res=i;
//          }
//          else if(arr[i]>arr[res]){
//              res=i;
//          }
//       }
//    }

//    return res;

// }
// int main()
// {
//    int n = 5;
//    int arr[] = {20,10,5,60,40};
//    int res = secondLargest(arr, n);
//    cout << res << endl;

// }

// Output:4

// alter-1:
// ->If second largest element is found then it return second largest element
// ->If second largest element is not found then it returns -1

// #include <iostream>
// #include <limits.h>
// using namespace std;

// int getLargest(int arr[], int n)
// {
//    int max = INT_MIN;
//    for (int i = 0; i < n; i++)
//    {
//       if (arr[i] > max)
//       {
//          max = arr[i];
//       }
//    }

//    return max;
// }
// int secondLargest(int arr[], int n)
// {
//    int largest = getLargest(arr, n);
//    int secondLargest = INT_MIN;
//    for (int i = 0; i < n; i++)
//    {
//       if (arr[i] != largest)
//       {
//          if (arr[i] > secondLargest)
//          {
//             secondLargest = arr[i];
//          }
//       }
//    }

//    // Check if secondLargest was updated, if not, there is no second largest
//    if (secondLargest == INT_MIN)
//    {
//       return -1;
//    }

//    return secondLargest;
// }
// int main()
// {
//    int n = 5;
//    // int arr[] = {1, 50, 8, 20, 18};
//    int arr[] = {20,10,5,6,40};
//    int res = secondLargest(arr, n);
//    cout << "second largest element:"<<res << endl;

// }

// Output:
// second largest element:20

// Alter-3:
// ->If second largest element is found then it return index
// ->If second largest element is not found then it returns -1

// #include <iostream>
// #include <limits.h>
// using namespace std;
// int largest(int arr[], int n)
// {
//    int max = INT_MIN;
//    for (int i = 0; i < n; i++)
//    {
//       if (arr[i] > max)
//       {
//          max = arr[i];
//       }
//    }
//    return max;
// }

// int secondLargest(int arr[], int n)
// {
//    int firstLargest = largest(arr, n);
//    int secondMax = INT_MIN;
//    int index = 0;
//    for (int i = 0; i < n; i++)
//    {
//       if (arr[i] != firstLargest)
//       {
//          if (arr[i] > secondMax)
//          {
//             secondMax = arr[i];
//             index = i;
//          }
//       }
//    }
//    if (secondMax == INT_MIN)
//    {
//       return -1;
//    }
//    return index;
// }

// int main()
// {
//    int arr[] = {100, 105, 110, 90};
//    int n = 4;
//    int res = secondLargest(arr, n);
//    cout << "second largest element index:" << res << endl;
// }

// Output:
// second largest element index:1


// 3. Check if an array is sorted

// 3.1 Naive Solution
// #include <iostream>
// using namespace std;

// bool checkArraySort(int arr[], int n) {
//    for(int i=0;i<n;i++){
//       for(int j=i+1;j<n;j++){
//          if(arr[i]>arr[j]){
//             return false;
//          }
//       }
//    }
//    return true;

// }

// int main() {
//     int arr[] = {10,20,30};
//     int n = 3;
//     int res=checkArraySort(arr, n);
//     cout<<res<<endl;
// }

// Output: 1

// 3.2 Efficient Solution
// #include<iostream>
// using namespace std;
// bool isSort(int arr[], int n){
//    for(int i=1;i<n;i++){
//       if(arr[i]<arr[i-1]){
//          return false;
//       }
//    }
//    return true;
// }
// int main(){
//    int arr[]={10,20,30};
//    int n=3;
//    bool res=isSort(arr,n);
//    cout<<res<<endl;

// }

// Output:1

// Alter-1:
// #include <iostream>
// using namespace std;

// bool checkArraySort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) { // Iterate until the second last element
//         if (arr[i] > arr[i + 1]) {
//             return false; // If an out-of-order element is found, return false
//         }
//     }
//     return true; // If no out-of-order elements are found, return true
// }

// int main() {
//     int arr[] = {100,20,30}; // Correct the array initialization
//     int n = 1; // Correct the size of the array
//     bool res = checkArraySort(arr, n); // Change the return type of checkArraySort to bool
//     cout << res << endl;
//     return 0;
// }

// alter-2:
// #include<iostream>
// using namespace std;
// void isSort(int arr[], int n){

//    bool sorted=true; //Assume array is sorted
//    for(int i=1;i<n;i++){
//       if(arr[i]<arr[i-1]){
//         sorted=false;
//         break;
//       }
//    }

//    if(sorted){
//       cout<<"sorted"<<endl;
//    }else{
//    cout<<"not sorted"<<endl;
//    }

// }
// int main(){
//    int arr[]={10,20,30};
//    int n=3;
//    isSort(arr,n);

// }
// Output: Sorted

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

// 5. Remove duplicates in array

// 1. Naive Approach
// ->Using another array to store values.
// Time complexity: O(n)
// Auxiliary Space : O(n)

// #include<iostream>
// using namespace std;
// void removeDuplicate(int arr[],int n){
//    int temp[n];
//    temp[0]=arr[0];
//    int res=1;
//    for(int i=1;i<n;i++){
//       if(temp[res-1]!=arr[i]){
//          temp[res]=arr[i];
//          res++;
//       }
//    }

//    for(int i=0;i<res;i++){
//       arr[i]=temp[i];
//    }

//    for(int i=0;i<res;i++){
//       cout<<arr[i]<<" ";
//    }
//    cout<<endl;

//    cout<<"size of new array : "<<res<<endl;
// }
// int main(){
//    int arr[]={10,20,20,30,30,30};
//    int n=6;
//    removeDuplicate(arr,n);

// }

// Output:
// 10 20 30
// size of new array : 3

// 2. Efficient solution
// ->using same array to store distnct elements
// Time complexity: O(n)
// Auxiliary Space : O(1)

// #include<iostream>
// using namespace std;
// void removeDuplicates(int arr[],int n){
//    int res=1;
//    for(int i=1;i<n;i++){
//       if(arr[res-1]!=arr[i]){
//          arr[res]=arr[i];
//          res++;
//       }
//    }

//    for(int i=0;i<res;i++){
//       cout<<arr[i]<<" ";
//    }
//    cout<<endl;

//    cout<<"Size of New Array : "<<res<<endl;

// }
// int main(){
//    int arr[]={10,20,20,30,30,30};
//    int n=6;
//    removeDuplicates(arr,n);

// }

// Output:
// 10 20 30 
// Size of New Array : 3

// ->My solution
// #include <iostream>
// #include <vector>
// using namespace std;
// void removeDuplicates(vector<int> &arr){ // Pass vector by reference
//    int n=arr.size();
//    int i=0,j=i+1;
//    for(int i=0;i<n;i++){
//       for(int j=i+1;j<n;){
//          if(arr[i]==arr[j]){
//             arr.erase(arr.begin()+j); // Erase duplicate element
//             n--; // Reduce size of vector after erasing
//          }else{
//             j++;  // Move to next element
//          }
//       }
//    }

//    for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//    }
//    cout<<endl;

//    int newSize=arr.size();
//    cout<<"size of new array"<<newSize<<endl;
// }
// int main()
// {
//    vector<int> arr = {10, 20, 20, 30, 30, 30};
//    removeDuplicates(arr);

// }
