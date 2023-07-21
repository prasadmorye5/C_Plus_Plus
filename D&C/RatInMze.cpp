#include <iostream>
#include<vector>
using namespace std;

bool isSafe(int i, int j, int row, int col, int arr[][4],
 vector<vector<bool> > &visited) {
  if( ((i>=0 && i < row) && (j >= 0 && j< col)) &&
      (arr[i][j] == 1 ) &&
      (visited[i][j]==false)) {
    return true;
  }
  else {
    return false;
  }
}

void solveMaze(int arr[][4], int row,int col, int i, int j,
vector<vector<bool> > &visited, vector<string>& path, string output  ) {

  //base case
  if(i == row-1 && j == col-1) {
    //answer found
    path.push_back(output);
    return;
  } 

  //Down -> i+1, j
  if(isSafe(i+1, j, row, col, arr, visited)) {
    visited[i+1][j] = true;
    solveMaze(arr, row, col, i+1, j, visited, path, output + 'D');
    //backtrack 
    visited[i+1][j] = false;
  }

  //Left -> i, j-1
  if(isSafe(i, j-1, row, col, arr, visited)) {
    visited[i][j-1] = true;
    solveMaze(arr, row, col, i, j-1, visited, path, output + 'L');
    //backtrack 
    visited[i][j-1] = false;
  }

  //Right -> i, j+1
  if(isSafe(i, j+1, row, col, arr, visited)) {
    visited[i][j+1] = true;
    solveMaze(arr, row, col, i, j+1, visited, path, output + 'R');
    //backtrack 
    visited[i][j+1] = false;
  }

  //Up-> i-1, j
if(isSafe(i-1, j, row, col, arr, visited)) {
    visited[i-1][j] = true;
    solveMaze(arr, row, col, i-1, j, visited, path, output + 'U');
    //backtrack 
    visited[i-1][j] = false;
  }


}

int main() {
  int maze[4][4] = { {1,0,0,0}, 
                 {1,1,0, 1},
                 {1,1,0,0},
                 {0,1,1,1}};

  if(maze[0][0] == 0) {
    cout << "No Path Exists " << endl;
    return 0;
  }
  int row = 4;
  int col = 4;

  vector<vector<bool> > visited(row, vector<bool>(col,false));
  //src ki value k true mark kredete h 
  visited[0][0] = true;

  vector<string> path;
  string output = "";

  solveMaze(maze,row,col, 0,0, visited, path, output);

  cout << "printing the results " << endl;
  for(auto i: path) {
    cout << i << " ";
  }
  cout << endl;
  if(path.size() == 0 ){
    cout << "No Path Exists " << endl;
  }

  
  return 0;
}




















// #include<iostream>
// #include<vector>
// using namespace std;
// bool isSafe (int rowx, int coly, int row, int col, int arr[][4], 
// vector<vector<bool> > &visited ){
//     if( ((rowx >= 0 && rowx < row) && (coly >= 0 && coly < col)) &&
//         (arr[rowx][coly] == 1) &&
//         (visited[rowx][coly] == false)){
//             return true;
//         }
//         else{
//             return false;
//         }
// }

// void solveMaze(int arr [][4], int row, int col, int rowx, int coly, 
// vector<vector <bool> > &visited, vector<string> &path, string output
// ){  
//     //base case
//     if(rowx == row-1 && coly == col-1){
//         //answer found 
//         path.push_back(output);
//         return;
//     }

//     //Down 
//     if(isSafe(rowx + 1, coly, row, col, arr, visited )){
//         visited[rowx+1][coly] = true;
//         solveMaze(arr, row, col, rowx+1, coly, visited, path, output + 'D');
//         //backtrack
//         visited[rowx+1][coly] = false;
//     }
//     // Left
//     if(isSafe (rowx , coly -1, row, col, arr, visited)) {
//         visited[rowx][col-1] = true;
//         solveMaze(arr, row, col, rowx, coly-1, visited, path, output + 'L');
//         //backtrack
//         visited[rowx][coly-1] = false;
//     }
//     //Right 
//     if(isSafe (rowx, coly+1, row, col, arr, visited)){
//         visited[rowx][coly+1] = true;
//         solveMaze(arr, row, col, rowx, coly+1, visited, path, output+'R');
//         //backtrack
//         visited[rowx][coly+1] = false;
//     }
//     // UP
//     if(isSafe (rowx-1, coly, row, col, arr, visited)){
//         visited[rowx-1][coly] = true;
//         solveMaze(arr, row, col, rowx-1, coly, visited, path, output+'U');
//         visited[row-1] [coly] = false;
//     }

// }


// int main()
// {
//     int maze[4][4] = {{1,0,0,0}, {1,1,0,1}, {1,1,0,0}, {0,1,1,1}};

//     if(maze [0][0] == 0){
//         cout<< " No path exists "<<endl;
//         return 0;
//     }

//     int row = 4;
//     int col = 4;

//     vector<vector<bool> > visited(row, vector<bool> (col, false));
//     // marking source value as true 
//     visited[0][0] = true;

//     vector<string> path;
//     string output ="";

//     solveMaze(maze, row, col, 0,0, visited, path, output);

//     cout<< "Printing the result "<< endl;
//     for(auto i: path){
//         cout << i <<" ";
//     }
//     cout <<endl;

//     if(path.size() == 0){
//         cout<< "No path exisst " << endl;
//     }
//  return 0;
// }