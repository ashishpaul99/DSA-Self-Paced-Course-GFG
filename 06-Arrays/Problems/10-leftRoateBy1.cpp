// 10-Left Rotate by 1
#include<iostream>
using namespace std;
void rotateBy1(int arr[],int n){
   int temp=arr[0];
   for(int i=1;i<n;i++){
      arr[i-1]=arr[i];
   }
   arr[n-1]=temp;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";  
   }

}
 int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    rotateBy1(arr,n);

 }

//  Output:
//  2 3 4 5 1 