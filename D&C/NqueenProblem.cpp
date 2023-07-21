#include<iostream>
#include<vector>
using namespace std;
bool isSafe (int row, int col, vector<vector<char> >&board, char n){
    int i = row;
    int j = col;
    // check row 
    while(j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }
    //check left upper diagonal
    i = row;
    j = col;
    while(i >= 0 && j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }
    // left bottom diagonal
    i = row;
    j = col;
    while(i < n && j >=0 ){
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }
    //no queen found 
    //postitionn is safe
    return true;
}

void printSolution(vector<vector<char> >& board, char n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<< board[i][j] << " ";
        }
        cout<< endl;
    }
    cout <<endl << endl;
}
void solve(vector<vector<char>> &board, int col, char n){
    //base case 
    if(col >= n){
        printSolution(board, n);
        return;
    }
    // RE case
    for(int row =0; row<n; row++){
        if(isSafe(row, col, board, n)){
            board[row][col] = 'Q';
            // RE for rest case
            solve(board, col+1, n); 
            //backtrack
            board[row][col] = 0;
        }
    }
}

int main()
{
    int n = 4;
    vector<vector<char>> board(n, vector<char> (n, '-'));
    int col = 0;
    solve(board, col, n);

 return 0;
}