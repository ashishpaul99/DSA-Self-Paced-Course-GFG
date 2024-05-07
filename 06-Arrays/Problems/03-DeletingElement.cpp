// 3. Deletion operation
#include<iostream>
using namespace std;
int deletion(int arr[],int n,int x,int cap){

   int index;
   for(int i=0;i<n;i++){
      if(arr[i]==x){
         break; //once element is found no need to continuing searching
      }
   }

   if(index==n){
      return n; //if element is not found return array size
   }

   for(int i=index;i<n-1;i++){
      arr[i]=arr[i+1];
   }

   //return size of the new array after deleting
   return n-1;

}
int main(){
   int arr[]={3,8,12,5,6};
   int x=6;
   int n=sizeof(arr)/sizeof(arr[0]);
   int cap=n;
   int res=deletion(arr,n,x,cap);
   cout<<res<<endl;

}

// Output:4

// alternative:
#include<iostream>
using namespace std;
void deletion(int arr[],int n,int x,int cap){

   int index;
   for(int i=0;i<n;i++){
      if(arr[i]==x){
         index=i;
         break; //once element is found no need to continuing searching
      }
   }

   if(index==-1){
      cout<<"element not found in array"<<endl;
      return; // Exit the function if element not found
   }

   for(int i=index;i<n-1;i++){
      arr[i]=arr[i+1];
   }

   // Decrement the size
   n--;
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }

}
int main(){
   int arr[]={3,8,12,5,6};
   int x=6;
   int n=sizeof(arr)/sizeof(arr[0]);
   int cap=n;
   deletion(arr,n,x,cap);

}