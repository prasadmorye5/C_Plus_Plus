#include<iostream>
using namespace std;
bool checkKey(string str, int i, int n, char key){
    if(i >= n){
        return false;
    }
    if(str[i] == key)
        return true;

    return checkKey(str, i+1, n, key);
}
int main()
{
    string str = "PrasadMorye";
    int n = str.length();
    int i =0;
    
    char key = 'a';

    bool ans = checkKey(str, i, n, key);
    cout << " Key is : "<< ans;
 return 0;
}