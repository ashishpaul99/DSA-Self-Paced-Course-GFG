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

#include <iostream>
#include <limits.h>
using namespace std;

int getLargest(int arr[], int n)
{
   int largest = 0;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] > arr[largest])
      {
         largest=i;
      }

   }
    return largest;

}
int secondLargest(int arr[], int n)
{
   int largest = getLargest(arr, n);
   int res=-1; // Initialize to -1 to indicate no second largest found
   for (int i = 0; i < n; i++)
   {
      if (arr[i] != arr[largest])//consider only elements which is not largest
      {
         if (res==-1)
         {
            res=i;
         }
         else if(arr[i]>arr[res]){
             res=i;
         }
      }
   }

   return res;

}
int main()
{
   int n = 5;
   int arr[] = {20,10,5,60,40};
   int res = secondLargest(arr, n);
   cout << res << endl;

}

// Output:4

// alter-1:
// ->If second largest element is found then it return second largest element
// ->If second largest element is not found then it returns -1

#include <iostream>
#include <limits.h>
using namespace std;

int getLargest(int arr[], int n)
{
   int max = INT_MIN;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] > max)
      {
         max = arr[i];
      }
   }

   return max;
}
int secondLargest(int arr[], int n)
{
   int largest = getLargest(arr, n);
   int secondLargest = INT_MIN;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] != largest)
      {
         if (arr[i] > secondLargest)
         {
            secondLargest = arr[i];
         }
      }
   }

   // Check if secondLargest was updated, if not, there is no second largest
   if (secondLargest == INT_MIN)
   {
      return -1;
   }

   return secondLargest;
}
int main()
{
   int n = 5;
   // int arr[] = {1, 50, 8, 20, 18};
   int arr[] = {20,10,5,6,40};
   int res = secondLargest(arr, n);
   cout << "second largest element:"<<res << endl;

}

Output:
second largest element:20

Alter-3:
->If second largest element is found then it return index
->If second largest element is not found then it returns -1

#include <iostream>
#include <limits.h>
using namespace std;
int largest(int arr[], int n)
{
   int max = INT_MIN;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] > max)
      {
         max = arr[i];
      }
   }
   return max;
}

int secondLargest(int arr[], int n)
{
   int firstLargest = largest(arr, n);
   int secondMax = INT_MIN;
   int index = 0;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] != firstLargest)
      {
         if (arr[i] > secondMax)
         {
            secondMax = arr[i];
            index = i;
         }
      }
   }
   if (secondMax == INT_MIN)
   {
      return -1;
   }
   return index;
}

int main()
{
   int arr[] = {100, 105, 110, 90};
   int n = 4;
   int res = secondLargest(arr, n);
   cout << "second largest element index:" << res << endl;
}

// Output:
// second largest element index:1