#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{1,6,2,4,10,14};
    int n = arr.size();

    for(int i = 1; i<n ; i++){
        // for code optimization
        int swapCount =0;
        for(int j = 0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapCount++;
            }
        }
        if (swapCount == 0)
        {
            break;
        }
        
    }
    for(int i =0; i<n; i++){
        cout<< arr[i]  << " ";
    }
 return 0;
}