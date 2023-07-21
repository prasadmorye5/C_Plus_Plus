// #include<iostream>
// using namespace std;
// int main()
// {   
//     int arr[5];
//     for(int i =0; i<5; i++){
//         cin >> arr[i];
//     }
//     for(int i =0; i<5; i++){
//         cout << (2*arr[i]) << " ";
//     }
//  return 0;
// }


// #include<iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
//     int arr[] ={1,2,3,4,5};
//     memset (arr, 1, sizeof(arr) );
//     for(int i=0; i<5; i++)
//     cout<< arr[i] << " ";
//  return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     int key;
//     cout << "Enter the key";
//     cin >> key;

//     bool isTrue = 0;
//     for (int i=0; i<size; i++){
//         if(arr[i] == key){
//             isTrue = 1;
//         }
//     }
//     if(isTrue){
//         cout<< "Found in array";
//     }
//     else {
//         cout << "Not Found";
//     }

//  return 0;

// }


// #include<iostream>
// using namespace std;
// int main()
// {

//     int arr[] = {0,1,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0};
//     int size = 17;
//     int numZero =0;
//     int numOne = 0;

//     for(int i =0; i<size; i++){
//         if(arr[i] == 0){
//             numZero++;
//         }
//         if(arr[i] == 1){
//             numOne++;
//         }
        
//     }
//     cout << " Zeroes : "<< numZero << " ones "<< numOne <<endl;

//  return 0;
// }



// #include<iostream>
// #include <limits.h>
// using namespace std;
// int main()
// {

//     int arr[] = {1,5,4,8,88,55,456,78,458,21,5,45,5};
//     int size = 13;
//     int max = INT_MIN;

//     for (int i=0; i<size; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     cout << max;
//  return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {

//     int arr[7] = {10,20,30,40,50,60,70};
//     int size = 7;
//     int start = 0;
//     int end = size-1;

//     while(true){
//         if(start > end){
//             break;
//         }
//         if(start == end){
//             cout << arr[start] << " ";
//         }
//         else{
//             cout<< arr[start] << " ";
//             cout<< arr[end] << " ";
//         }
//         start++;
//         end--;
//     } 
//  return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50,60,70,80};
    int size = 8;
    int start =0;
    int end = size-1;

    while(start <= end){
        swap(arr[start], arr[end]);
            start++;
            end--;
        
    }
    for(int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
 return 0;
}