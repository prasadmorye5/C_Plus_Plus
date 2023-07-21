#include<iostream>
using namespace std;
void permute(string &str, int i){
    if(i >= str.length()){
        cout<< str << " ";
        return;
    }
    for(int j = i; j < str.length(); j++){
        swap(str[i] , str[j]);
        permute(str, i+1);
        swap(str[i], str[j]);
    }
}
int main()
{
    string str = "abc";
    int i = 0;
    permute(str, i);
 return 0;
}