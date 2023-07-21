
//Left to Right Methood 

// #include<iostream>
// using namespace std;

// void lastOccLTR(string& str, char target, int i, int& ans){
//     //base 
//     if(i >= str.size()){
//         return;
//     }
//     if(str[i] == target) {
//         ans = i;
//     }
//     lastOccLTR(str, target, i+1, ans);
// }
// int main()
// {
//     string str;
//     cin>> str;
//     char target;
//     cin>> target;
//     int ans = -1;

//     lastOccLTR(str, target, 0, ans);
//     cout<< ans << endl;
//  return 0;
// }


//Right to left method

#include<iostream>
using namespace std;

void lastRTL(string& s, char x, int i, int& ans){
    if(i < 0){
        return;
    }
    if(s[i] == x){
        ans = i;
    }
    lastRTL(s, x, i-1, ans);
}
int main()
{
    string s;
    cin>> s;
    char x;
    cin>>x;
    int ans = -1;

    lastRTL(s, x, s.size() -1 , ans);
    cout<< ans << endl;

 return 0;
}