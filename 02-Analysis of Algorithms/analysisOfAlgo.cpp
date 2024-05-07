// 02-Analysis of Algorithms(Background)   Date: 26/04/24
// 1. Sum of n numbers
// Input : n=3
// Output: 6

// eg-1: My solution
// #include<iostream>
// using namespace std;
// int main(){
//     int n=3;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<sum<<endl;
// }

// Output:
// 6

// Solution-1:
// #include<iostream>
// using namespace std;
// int sumOfn1(int n){
//      return n*(n+1)/2;
// }
// int main(){
//     int n=3;
//     int res=sumOfn(n);
//     cout<<res<<endl;
// }

// Output:6

// Solution-2:
// #include <iostream>
// using namespace std;
// int sumOfn2(int n)
// {
//     int sum = 0;
//     for (int i = 0; i <= n; i++){
//       sum=sum+i;
//     }  
//     return sum;   
// }
// int main()
// {
//     int n = 3;
//     int res = sumOfn(n);
//     cout << res << endl;
// }

// Output:6

// Solution-3:
// #include <iostream>
// using namespace std;
// int sumOfn3(int n)
// {
//     int sum = 0;
//     for (int i = 0; i <= n; i++){
//       for(int j=1;j<=i;j++){
//         sum++;
//       }
//     }  
//     return sum;   
// }
// int main()
// {
//     int n = 3;
//     int res = sumOfn3(n);
//     cout << res << endl;
// }

// Output:6

// example-2:
#include <iostream>
using namespace std;
int search(int arr[],int n,int x)
{
  for(int i=0;i<n;i++){
    if(arr[i]==x){
      return i;
    }
  }
  return -1;
      
}
int main()
{
   int n=6,x=2;
   int arr[]={1,2,3,4,5,6};
   int res=search(arr,n,x);
   cout<<res<<" ";

}
// Output:
// 1 
