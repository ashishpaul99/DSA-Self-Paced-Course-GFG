// 5. Remove duplicates in array

// 1. Naive Approach
// ->Using another array to store values.
// Time complexity: O(n)
// Auxiliary Space : O(n)

#include<iostream>
using namespace std;
void removeDuplicate(int arr[],int n){
   int temp[n];
   temp[0]=arr[0];
   int res=1;
   for(int i=1;i<n;i++){
      if(temp[res-1]!=arr[i]){
         temp[res]=arr[i];
         res++;
      }
   }

   for(int i=0;i<res;i++){
      arr[i]=temp[i];
   }

   for(int i=0;i<res;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;

   cout<<"size of new array : "<<res<<endl;
}
int main(){
   int arr[]={10,20,20,30,30,30};
   int n=6;
   removeDuplicate(arr,n);

}

// Output:
// 10 20 30
// size of new array : 3

// 2. Efficient solution
// ->using same array to store distnct elements
// Time complexity: O(n)
// Auxiliary Space : O(1)

#include<iostream>
using namespace std;
void removeDuplicates(int arr[],int n){
   int res=1;
   for(int i=1;i<n;i++){
      if(arr[res-1]!=arr[i]){
         arr[res]=arr[i];
         res++;
      }
   }

   for(int i=0;i<res;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;

   cout<<"Size of New Array : "<<res<<endl;

}
int main(){
   int arr[]={10,20,20,30,30,30};
   int n=6;
   removeDuplicates(arr,n);

}

// Output:
// 10 20 30 
// Size of New Array : 3

// ->My solution
#include <iostream>
#include <vector>
using namespace std;
void removeDuplicates(vector<int> &arr){ // Pass vector by reference
   int n=arr.size();
   int i=0,j=i+1;
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;){
         if(arr[i]==arr[j]){
            arr.erase(arr.begin()+j); // Erase duplicate element
            n--; // Reduce size of vector after erasing
         }else{
            j++;  // Move to next element
         }
      }
   }

   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;

   int newSize=arr.size();
   cout<<"size of new array"<<newSize<<endl;
}
int main()
{
   vector<int> arr = {10, 20, 20, 30, 30, 30};
   removeDuplicates(arr);

}

// Output:
// 10 20 30 
// size of new array3