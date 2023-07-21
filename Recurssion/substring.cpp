#include<iostream>
using namespace std;
void printSubsequence(string str, int n, string output, int i){
    if(i >= n){
        cout << output <<" " <<endl;
        return;
    }
    printSubsequence(str, n, output, i+1);

    printSubsequence(str, n, output + str[i], i+1);
}
int main()
{
    string str = "abcd";
    string output = "";
    int i = 0;
    int n = str.length();

    printSubsequence(str, n, output, i);
    
 return 0;
}