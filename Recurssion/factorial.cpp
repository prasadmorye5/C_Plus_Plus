#include<iostream>
using namespace std;

int factorial (int n){
    if(n == 1)
    return 1;

    else{
        return n * factorial(n-1);
    }
}
int main()
{
    int n;
    cout << " Enter the number n :" << endl;
    cin >> n;

    int ans = factorial(n);
    cout << " Factorial of n is : "<< ans;

 return 0;
}