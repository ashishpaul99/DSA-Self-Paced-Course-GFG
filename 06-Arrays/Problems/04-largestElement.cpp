// 1. Largest Element in an Array
#include <iostream>
using namespace std;

int largestElement(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      bool flag = true; // Assume arr[i] is the largest element

      for (int j = 0; j < n; j++)
      {
         if (arr[j] > arr[i])
         {
            flag = false; // arr[i] is not the largest element
            break;        // Exit the inner loop
         }
      }

      if (flag == true) // If arr[i] is still considered the largest, return its index
         return i;
   }

   // This line will never be reached if there is always a largest element
   return -1;
}

int main()
{
   int arr[] = {2, 1, 10, 4, 60};
   int n = 5;
   int res = largestElement(arr, n);
   cout << res << endl;
   return 0;
}

// Output:4

// Alternative-1
#include <iostream>
using namespace std;

void largestElement(int arr[], int n)
{
   int max = arr[0]; // Initialize max to the first element of the array

   for (int i = 1; i < n; i++)
   {
      bool isMax = true; // Assume arr[i] is the largest element until proven otherwise

      for (int j = 0; j < n; j++)
      {
         if (arr[j] > arr[i])
         {
            isMax = false; // arr[i] is not the largest element
            break; // Exit the inner loop since we already found a larger element
         }
      }

      if (isMax)
      {
         max = arr[i]; // Update max if arr[i] is the largest element
      }
   }

   cout << max << endl; // Output the largest element after the loop completes
}

int main()
{
   int arr[] = {2, 21, 10, 4, 60};
   int n = 5;
   largestElement(arr, n);
   return 0;
}

// Output:
// 60

// Alternative-2:
#include <iostream>
using namespace std;

int largestElement(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      bool flag = true; // Assume arr[i] is the largest element

      for (int j = 0; j < n; j++)
      {
         if (arr[j] > arr[i])
         {
            flag = false; // arr[i] is not the largest element
            break;        // Exit the inner loop
         }
      }

      if (flag == true) // If arr[i] is still considered the largest, return its index
         return i;
   }

   // This line will never be reached if there is always a largest element
   return -1;
}

int main()
{
   int arr[] = {2, 1, 10, 4, 60};
   int n = 5;
   int res = largestElement(arr, n);
   cout << res << endl;
}