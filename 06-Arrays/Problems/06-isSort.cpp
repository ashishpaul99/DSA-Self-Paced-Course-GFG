// 3. Check if an array is sorted

// 3.1 Naive Solution
#include <iostream>
using namespace std;

bool checkArraySort(int arr[], int n) {
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(arr[i]>arr[j]){
            return false;
         }
      }
   }
   return true;

}

int main() {
    int arr[] = {10,20,30};
    int n = 3;
    int res=checkArraySort(arr, n);
    cout<<res<<endl;
}

// Output: 1

// 3.2 Efficient Solution
#include<iostream>
using namespace std;
bool isSort(int arr[], int n){
   for(int i=1;i<n;i++){
      if(arr[i]<arr[i-1]){
         return false;
      }
   }
   return true;
}
int main(){
   int arr[]={10,20,30};
   int n=3;
   bool res=isSort(arr,n);
   cout<<res<<endl;

}

// Output:1

// Alter-1:
#include <iostream>
using namespace std;

bool checkArraySort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Iterate until the second last element
        if (arr[i] > arr[i + 1]) {
            return false; // If an out-of-order element is found, return false
        }
    }
    return true; // If no out-of-order elements are found, return true
}

int main() {
    int arr[] = {100,20,30}; // Correct the array initialization
    int n = 1; // Correct the size of the array
    bool res = checkArraySort(arr, n); // Change the return type of checkArraySort to bool
    cout << res << endl;
    return 0;
}

alter-2:
#include<iostream>
using namespace std;
void isSort(int arr[], int n){

   bool sorted=true; //Assume array is sorted
   for(int i=1;i<n;i++){
      if(arr[i]<arr[i-1]){
        sorted=false;
        break;
      }
   }

   if(sorted){
      cout<<"sorted"<<endl;
   }else{
   cout<<"not sorted"<<endl;
   }

}
int main(){
   int arr[]={10,20,30};
   int n=3;
   isSort(arr,n);

}
// Output: Sorted