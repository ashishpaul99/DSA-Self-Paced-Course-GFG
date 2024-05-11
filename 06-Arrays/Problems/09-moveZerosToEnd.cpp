// 1. Naive Approach
#include <iostream>
using namespace std;
void moveZeros(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if(arr[j]!=0){
                   swap(arr[i], arr[j]);
                   break;
                }
                
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {0, 5, -1, 10, 0, 0};
    int n = 6;
    moveZeros(arr, n);
    return 0;
}

// Output:
// 10 -1 5 0 0 0 

// 2. Efficient Solution
#include <iostream>
using namespace std;
void moveZeros(int arr[], int n)
{
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {0, 5, -1, 10, 0, 0};
    int n = 6;
    moveZeros(arr, n);
    return 0;
}

// Output:
// 5 -1 10 0 0 0 


// 3. My Solution
#include<iostream>
using namespace std;
void moveZeros(int arr[],int n){
     int i=0,j=0;
     while(i<n && j<n){
        while(arr[i]!=0 && i<n){
            i++;
        }
        while(arr[j]==0 && j<n){
            j++;
        }

        if(i<n && j<n){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
     }

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}
int main(){
    int arr[]={0,5,-1,10,0,0};
    int n=6;
    moveZeros(arr,n);
    return 0;
}