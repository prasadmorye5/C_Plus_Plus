#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

bool check(char ch[]){
    int i =0;
    int n = strlen(ch);
    int j = n-1;

    while(i <= j){
        if(ch[i] != ch[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    char ch[100] = "rececars";
    cout<< " palindrome is : "<< check(ch) << endl;
 return 0;
}