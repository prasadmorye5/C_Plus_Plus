#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void solve(vector<int> & arr, int i, int sum, int &maxi){
    if(i >= arr.size()){
        // maxi value update karo
        maxi = max(sum, maxi);
        return;
    }
    //include
    solve(arr, i+2, sum+arr[i], maxi);

    //exclude
   solve(arr, i+1, sum, maxi); 
}
int main()
{
    vector<int> arr{1, 2, 3, 1, 3, 5, 8, 1, 9};
    int sum = 0;
    int maxi = INT_MIN;
    int i =0;
    solve(arr, i, sum, maxi);
    cout<< " Ans is : "<< maxi << endl;
 return 0;
}