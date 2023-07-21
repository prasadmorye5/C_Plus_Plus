#include<iostream>
#include<vector>
using namespace std;

int first (vector<int> v, int target){
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s)/2;
    int ans = -1;

     while(s<=e){
        if(v[mid] == target){
            ans = mid;
            e = mid - 1;
        }
        else if(target < v[mid]){
            e = mid - 1;
        }
    else if(target > v[mid]){
        s = mid + 1;
    }
    mid = s + (e - s)/2;

     }
     return ans;
}


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
    vector<int> v {1,2,3,4,5,5,5,5,5,5,5,5,5,6,7,8,9};
    int target = 5;
    int firstOccrance = first(v, target);
    int lastOccrance = search(v, target);

    cout<< lastOccrance - firstOccrance +1 << endl;
 return 0;
}
