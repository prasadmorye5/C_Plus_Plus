#include<iostream>
#include<limits.h>
using namespace std;

void find(int arr[], int n, int i, int& maxi){
    if(i >= n){
        return;
    }
    if(arr[i] >= maxi){
        maxi = arr[i];

        // maxi = max(maxi, arr[i]);
    }
    find(arr, n, i+1, maxi);
}

void findmin(int arr[], int n, int i, int& mini){
    if(i >= n){
        return;
    }
    mini = min(mini, arr[i]);

    findmin(arr, n, i+1, mini);
}
int main()
{
    int arr[] = {10,20,30,41,51,55,66,88};
    int n = 8;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int i =0;

    find(arr, n, i, maxi);

    findmin(arr, n, i, mini);

    cout <<" maximum element is : "<< maxi <<endl;
    cout <<" mini element is : "<< mini;
 return 0;
}