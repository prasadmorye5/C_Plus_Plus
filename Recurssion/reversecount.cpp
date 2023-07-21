#include<iostream>
using namespace std;

void print(int n ){
    // base case
    if(n == 0){
        return;
    }
    // processing

    cout << n <<" ";
    // recursive call 
    print(n-1);
    //for straight call
    // cout << n <<" ";
}
int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    
    print(n);

 return 0;
}