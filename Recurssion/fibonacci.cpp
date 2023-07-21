#include<iostream>
using namespace std;
int fib(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    int fac = fib(n-1) + fib(n-2);
    return fac;
}
int main()
{
    int n;
    cout<< " Enter the number :" ;
    cin >> n;

    int ans = fib(n);
    cout << " Ans is :" << ans;

 return 0;
}