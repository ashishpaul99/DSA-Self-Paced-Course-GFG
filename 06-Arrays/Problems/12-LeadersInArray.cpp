// 11. Leader in an Array problem
// 1. Naive Approach
// -> it takes O(n^2) time conplexity and O(1) Auxiliary space.

// #include <iostream>
// using namespace std;
// void findLeader(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         bool leader = true;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] >=arr[i])
//             {
//                 leader = false;
//                 break;
//             }
//         }
//         if (leader)
//         {
//             cout << arr[i]<<" ";
//         }
//     }
// }
// int main()
// {
//     // int arr[] = {7, 10, 4, 10, 6, 5, 2};
//     int arr[] = {30,20,10};
//     int n = 3;
//     cout<<"Leaders In an Array: ";
//     findLeader(arr, n);
// }

// Output:
// Leaders In an Array: 10 6 5 2

// 2. Effcient solution
// -> it takes O(n) time conplexity and O(1) Auxiliary space.

#include <iostream>
using namespace std;
void findLeader(int arr[], int n)
{
    int leader = arr[n - 1]; // The last element is always a leader
    cout << leader << " ";   // Print the last element as it is a leader

    // Traverse the array from the second last element to the first
    for (int i = n - 2; i > 0; i--)
    {
        if (arr[i] > leader) // Compare with the current leader
        {
            leader = arr[i];
            cout << leader << " ";
        }
    }
}
int main()
{
    int arr[] = {7, 10, 4, 10, 6, 5, 2};
    int n = 7;
    cout << "Leaders In an Array: ";
    findLeader(arr, n);
}

// Output:
// Leaders In an Array: 2 5 6 10