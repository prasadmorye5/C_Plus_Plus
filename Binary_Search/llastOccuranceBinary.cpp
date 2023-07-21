#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> arr, int target){
    int start =0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2 ;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == target){
             ans = mid;
             start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else if(target > arr[mid]) {
            start = mid + 1;
        }
        mid = start + (end - start)/2 ;
    }
    return ans;
}

int main()
{
    
    vector<int> arr {1,2,3,4,5,6,6,6,6,6,6,12,15,14,19};
    int target = 6;
    int find = search(arr, target);

    cout<< " value found " << find << endl;

 return 0;
}