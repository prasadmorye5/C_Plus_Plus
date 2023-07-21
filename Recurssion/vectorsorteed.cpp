#include<iostream>
#include<vector>
using namespace std;

bool search(vector<int > &arr, int& n, int i){
    if(i == n-1){
        return true;
    }
    // 1 case solve by us
    if(arr[i+1] <= arr[i]){
        return false;
    }
    return search(arr, n, i+1);
}
int main()
{
    vector<int> arr = {100,10,31,66,88,99};
    int n = arr.size();
    int i = 0;

    bool isAns = search(arr, n, i);
    if(isAns){
        cout<< " Array is Sorted ";
    }
    else{
        cout<< " Array is not sorted";
    }

 return 0;
}