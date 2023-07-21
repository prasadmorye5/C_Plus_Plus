#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{6,5,4,3,2,1};
    int n = arr.size();

    for(int i =0; i<n; i++){
        int minimun = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minimun]){
                minimun = j;
            }
        }
        swap(arr[i], arr[minimun]);
    }
    for(int i =0; i<n; i++){
        cout<< arr[i] ;
    }
 return 0;
}