// 1. Naive solution
// #include <iostream>
// using namespace std;
// int  trappingRainWater(int arr[], int n)
// {
//    int waterCap=0;
//     for(int i=1;i<n-1;i++){
//         int lMax=arr[i];
//         for(int j=0;j<i;j++){
//             if(arr[j]>lMax){
//                 lMax=arr[j];
//             }
//         }

//         int rMax=arr[i];
//         for(int k=i+1;k<n;k++){
//             if(arr[k]>rMax){
//                  rMax=arr[k];
//             }

//         }

//         waterCap=waterCap+(min(rMax,lMax)-arr[i]);

//     }

// if(waterCap<0){
//     return 0;
// }
// return waterCap;
// }

// int main()
// {
//     int arr[] = {3,2,1};
//     int n = 3;
//     int res=trappingRainWater(arr, n);
//     cout<<res<<endl;
// }



// 2. Efficient soltion
// #include <iostream>
// using namespace std;
// int  trappingRain(int arr[], int n)
// {

//     int left[n]; 
//     int right[n]; 
  
//     // Initialize result 
//     long long water = 0; 
  
//     // Fill left array 
//     left[0] = arr[0]; 
//     for (int i = 1; i < n; i++) 
//         left[i] = max(left[i - 1], arr[i]); 
  
//     // Fill right array 
//     right[n - 1] = arr[n - 1]; 
//     for (int i = n - 2; i >= 0; i--) 
//         right[i] = max(right[i + 1], arr[i]); 
  
//     for (int i = 1; i < n - 1; i++) { 
//         water=water+(min(left[i],right[i])-arr[i]);
//     } 
  
//     return water; 
    
// }
// int main()
// {
//     int arr[] ={3,0,1,2,5} ;
//     int n = 6;
//     int res=trappingRain(arr, n);
//     cout << res << endl;
// }


// alter:
// #include <iostream>
// using namespace std;
// int  trappingRain(int arr[], int n)
// {
// int waterCap = 0;
//     int lmax[n], rmax[n];
//     lmax[0] = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > lmax[i - 1])
//         {
//             lmax[i] = arr[i];
//         }
//         else
//         {
//             lmax[i] = lmax[i - 1];
//         }
//     }

//     rmax[n-1] =arr[n-1];

   
//     for (int i = n-2; i >=0; i--)
//     {
//         if (arr[i] > rmax[i + 1])
//         {
//             rmax[i] = arr[i];
//         }
//         else
//         {
//             rmax[i] = rmax[i+1];
//         }
//     }
//     for (int i = 1; i < n - 1; i++)
//     {
//         waterCap = waterCap + (min(lmax[i], rmax[i]) - arr[i]);
//     }

//     return waterCap;
    
// }
// int main()
// {
//     int arr[] = {6,9,9};
//     int n = 3;
//     int res=trappingRain(arr, n);
//     cout << res << endl;
// }



