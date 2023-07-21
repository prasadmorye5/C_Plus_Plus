#include<iostream>
using namespace std;
int main()
{
    int arr [3][3] = {{1,2,3}, {2,3,5}, {4,5,5}};
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<< arr[i][j] << " ";
        }
        cout<< endl;
    }

cout << endl << endl;

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<< arr[j][i] << " ";
        }
        cout<< endl;
    }
 return 0;
}