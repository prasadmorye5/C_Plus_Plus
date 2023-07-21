// #include<iostream>
// using namespace std;

// int search (int arr[], int size, int target){
//     int start =0;
//     int end = size-1;
//     int mid = (start + end) / 2;

//     while(start <= end){
//         int element = arr[mid];

//         if(element == target){
//             return mid;
//         }
//         else if(target < element ){
//             end = mid -1;
//         }
//         else{
//             start = mid + 1;
//         }
//         mid = (start + end) / 2;
//     }
//     return -1;

// }

// int main()
// {   
//     int arr[] = {1,2,3,4,5,6,8,9,10,15,16};
//     int size = 11;
//     int target = 16;

//     int targetIndex = search(arr,size,target);

//     if (targetIndex == -1){
//         cout<< " Value not found";
//     }
//     else{
//         cout<< " value found at " << targetIndex <<endl;
//     }


//  return 0;
// }




#include<iostream>
using namespace std;

int search (int arr[], int size, int target){
    int start =0;
    int end = size -1;
    int mid = start + (end - start)/2;

    while(start <= end){
        int element = arr[mid];

        if(element == target){
            return mid;
        }
        else if(target < element){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
      mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{   
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,15};
    int size = 12;
    int target = 1;

    int targetIndex = search(arr, size, target);
    if(targetIndex == -1){
        cout << " Not Found" ;
    }
    else{
        cout<< " found at index " << targetIndex <<endl;
    }

 return 0;
}










