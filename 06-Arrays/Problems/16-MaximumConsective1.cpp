// 1. Naive Solution
#include<iostream>
using namespace std;
int  maximumConsecutiveOnes(int arr[],int n){
   int res=0;
   for(int i=0;i<n;i++){
      int oneCount=0;
      for(int j=i;j<n;j++){
        if(arr[j]==1){
          oneCount++;
        }else{
          break;
        }
        res=max(res,oneCount);
      }  
   }
   return res;
}
int main(){
    int arr[]={0,1,1,1,1,1};
    int n=6;
    int res=maximumConsecutiveOnes(arr,n);
    cout<<res<<endl;
}


// 2.Effective solution
// #include<iostream>
// using namespace std;
// void maximumConsecutiveOnes(int arr[],int n){
//   int maxOne=0;
//   int oneCount=0;
//   for(int i=0;i<n;i++){
//     if(arr[i]==1){
//        oneCount++;
//     }else{
//       oneCount=0;
//     }
//     maxOne=max(oneCount,maxOne);

//   }

  
//   cout<<maxOne;
// }
// int main(){
//     int arr[]={0,1,1,1,0,1};
//     int n=6;
//     maximumConsecutiveOnes(arr,n);
// }