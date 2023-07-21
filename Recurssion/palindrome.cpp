#include<iostream>
using namespace std;
bool isPalindromeCheck(string& s, int start, int end){
    if(start >= end){
        return true;
    }
    if(s[start] != s[end]){
        return false;
    }
    return isPalindromeCheck(s, start+1, end-1);
}
int main()
{
    string s;
    cin>> s;
     cout<< isPalindromeCheck(s, 0, s.size()-1)<< endl;
      
         return 0;
     }
     

