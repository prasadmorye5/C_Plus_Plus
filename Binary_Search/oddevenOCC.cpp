#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> arr){
    int s =0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(s == e){
            return e;
        }
        //for even
        if(mid%2 == 0){
            if(arr[mid] == arr[mid+1]){
                s = mid +1;
            }
            else{
                e = mid;
            }
        }
        else{
            if(arr[mid] == arr[mid-1]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        mid = s+ (e-s)/2;
    }
    return -1;
}
using namespace std;
int main()
{
    vector <int> arr{1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,1,1,2,2,3,4,4,100,100};
    int ans = search(arr);
    cout<< "ans is at :" << ans << "   " << arr[ans];
 return 0;
}