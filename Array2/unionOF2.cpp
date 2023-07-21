#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    int arr[5] = {1,3,5,7,9};
    int sizea = 5;
    int brr[4] = {2,4,6};
    int sizeb = 3;

    vector <int> vec;
    for(int i =0; i<sizea; i++){
        vec.push_back(arr[i]);
    }

    for(int i =0; i<sizeb; i++){
        vec.push_back(brr[i]);
    }
    for(int i =0; i<vec.size(); i++ ){
        cout<< vec[i] << " ";
    }
 return 0;
}