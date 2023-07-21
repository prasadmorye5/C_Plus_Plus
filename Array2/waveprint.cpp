#include<iostream>
#include<vector>
using namespace std;

void wave(vector<vector <int> > v){
    int m=v.size();
    int n=v[0].size();

    for(int start=0; start<n; start++){
        if((start & 1) == 0){
            for(int i=0; i<m; i++){
                cout<< v[i][start] <<" ";
            }
        }
        else{
            for(int i =m-1; i>=0; i--){
                cout<< v[i][start] <<" ";
            }
        }
    }

}

int main()
{
    vector <vector <int> > v{
        {1,2,3},
        {4,5,6},
        {7,8,9},
         {5,8,9}
    };
    wave(v);
 return 0;
}