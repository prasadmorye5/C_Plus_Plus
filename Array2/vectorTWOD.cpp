#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    // vector < vector <int> > vec;
    // vector <int> a{1,2,3};
    // vector <int> b{4,5,6};
    // vector <int> c{7,8,9};

    // vec.push_back(a);
    // vec.push_back(b);
    // vec.push_back(c);

    // for(int i=0; i<vec.size(); i++){
    //     for(int j=0; j<vec[i].size(); j++ ){
    //         cout<< vec[i][j] <<" ";
    //     }
    //     cout<< endl;
    // }


    vector <vector <int> > vec (3, vector<int> (5, 5));
    for(int i =0; i<vec.size(); i++){
        for (int j=0; j<vec[i].size(); j++){
            cout<< vec[i][j] << " ";

        }
        cout<< endl;
    }
 return 0;
}