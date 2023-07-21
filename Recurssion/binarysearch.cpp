#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> arr, int s, int e, int key){
    int mid = (s+e)/2;
    if(s > e){
        return -1;
    }
    if(arr[mid] == key){
        return mid;
    }

    if(arr[mid] < key){
        return search(arr, mid+1, e, key);
    }
    else{
        return search(arr, s, mid-1, key);
    }

}
int main()
{
    vector<int> arr = {10,20,30,40,51,60,99,97,787,8888,99999};
    int key = 99999;
    int n = arr.size();
    int s = 0;
    int e = n-1;

    int ans = search(arr, s, e, key);
    cout<< " Ans at index "<<ans;
 
 return 0;
}