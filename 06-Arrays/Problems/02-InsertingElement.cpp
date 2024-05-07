// 2. Inserting element in an array

// Intput -> arr[]->{5,7,10,20,} , pos=2, x=3 , index=1
// Output: arr[]->{5,3,7,10,20}

#include <iostream>
using namespace std;

void insert(int arr[], int& n, int x, int cap, int pos)
{
   if (n == cap)
   {
      cout << "No space in array" << endl;
      return;
   }

   // Finding the index where we want to insert the element.
   // Position begins from 1 and index begins from zero
   int index = pos - 1;

   // Shifting elements to the right to make space for the new element
   for (int i = n - 1; i >= index; i--)
   {
      arr[i + 1] = arr[i];
   }
   arr[index] = x;

   // Incrementing the size of the array after insertion
   n++;

   // Printing the modified array
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
}

int main()
{
   int cap = 5;
   int x = 2;
   int pos = 3;
   int arr[] = {5, 7, 10, 20};
   int n = sizeof(arr) / sizeof(arr[0]);

   insert(arr, n, x, cap, pos);

   return 0;
}

// Alternative-1
#include <iostream>
using namespace std;

void insert(int arr[], int& n, int x, int cap, int pos)
{
    if (n == cap)
    {
        cout << "No space in array" << endl;
        return;
    }

    // Finding the index where we want to insert the element.
    // Position begins from 1 and index begins from zero
    int index = pos - 1;

    // Shifting elements to the right to make space for the new element
    for (int i = n; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Inserting the new element at the specified position
    arr[index] = x;

    // Incrementing the size of the array after insertion
    n++;

    // Printing the modified array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int cap = 5;
    int x = 2;
    int pos = 3;
    int arr[] = {5, 7, 10, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Array after insertion: ";
    insert(arr, n, x, cap, pos);
    cout << endl;

    return 0;
}

// Alternative-2
#include <iostream>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
   if (n == cap)
   {
     return n; // No space in the array, return original size
   }
   else
   {
      // Finding the index where we want to insert the element.
      // Position begins from 1 and index begins from zero
      int index = pos - 1;

      // Shifting elements to the right to make space for the new element
      for (int i = n - 1; i >= index; i--)
      {
         arr[i + 1] = arr[i];
      }
      arr[index] = x;
   }

   return (n + 1); // Return updated size after insertion
}

int main()
{
   int cap = 5;
   int x = 3;
   int pos = 2;
   int arr[] = {5, 7, 10, 20};
   int n = sizeof(arr) / sizeof(arr[0]);
   int res = insert(arr, n, x, cap, pos);
   cout << res << endl;

   return 0;
}