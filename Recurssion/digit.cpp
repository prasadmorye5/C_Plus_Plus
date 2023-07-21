#include<iostream>
using namespace std;

void printD(int n){
    if (n == 0){
        return;
    }
    int newValue = n/10;
     printD(newValue) ;

   int digit = n % 10;
   cout << digit <<" ";

   

}

int main()
{
    int n = 786;
    
    printD(n);
 return 0;
}