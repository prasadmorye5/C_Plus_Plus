#include<iostream>
using namespace std;
int search(int n){
int target = n;
int s = 0;
int e = n;

int mid = s+ (e-s)/2;
int ans = -1;

while(s <= e){
    if(mid*mid == target){
         return mid;
    }
   
    if(mid*mid > target){
        e = mid -1;
    }

    else{
        ans = mid;
        s = mid+1;
    }
    mid = s + (e-s)/2;

}
return ans;
}
int main()
{
    int n;
    cout <<"Enter the elemennt" <<endl;
    cin >> n;
    int ans = search(n);
    cout<< "Squrt of ans id " <<ans;

 return 0;
}