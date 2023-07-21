#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector <int > vec {1,2,3,4,5,6,7,8,9,10};
    if(binary_search (vec.begin(), vec.end(), 55)){
        cout<< "Found " <<endl;
    }
    else{
        cout<< "not found" << endl;
    }
 return 0;
}