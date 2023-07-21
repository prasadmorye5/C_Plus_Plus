#include<iostream>
#include<vector>
using namespace std;
int findElement (vector <int> vec){
    int ans =0;
    for(int i =0; i<vec.size(); i++){
        ans = ans ^ vec[i];
    }
    return ans;

}
int main()
{   
    int n;
    cout<< "Size of arr means aray size ";
    cin >> n;

    vector <int> vec(n);
    cout<< "Enter the number inputs ";
    for (int i =0; i<vec.size(); i++){
        cin >> vec[i];

    }
    
    int uniqueElement = findElement(vec);
    cout<< " ANs is " << uniqueElement <<endl;


 return 0;
}