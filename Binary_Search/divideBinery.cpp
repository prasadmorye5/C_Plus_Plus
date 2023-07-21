#include<iostream>
using namespace std;

int search(int divident, int divisor){
    int s = 0;
    int e = abs(divident);
    int mid = s + (e-s)/2;
    int ans =0;

    while(s <= e){
        if(mid*abs(divisor) == abs(divident)){
            ans = mid;
            break;
        }
        if(mid*abs(divisor) > abs(divident)){
            e = mid-1;
        }
        else{
            ans =mid;
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    if((divisor<0 && divident<0) || (divisor>0 && divident>0))
    return ans;
    else {
        return -ans;
    }
}

int main()
{
    int divident = 221;
    int divisor = -7;
    int ans = search(divident, divisor);
    cout << "Ans is : "<< ans;

 return 0;
}


// for minus case we add absolute 