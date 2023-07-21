#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivotIndex = s;
    int pivotElement = arr[s];

    // find postiion and place
    int count = 0;
    for(int i= s+1; i<=e; i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }
    // I have right postition of pivot index now 
    int rightIndex = s + count;
    swap(arr[pivotIndex] , arr[rightIndex]);
    pivotIndex = rightIndex;

    // check left or right 
    int i = s;
    int j = e;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivotElement){
            i++;
        }
        while(arr[j] > pivotElement){
            j--;
        }

    // 2 case : 1 no need to swap : or found element to swap
    if(i < pivotIndex && j > pivotIndex)
        swap (arr[i], arr[j]);
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    if(s >= e)
    return;

    int pivot = partition(arr, s, e);
    quickSort(arr, s, pivot-1);
    quickSort(arr, pivot+1, e);


}
int main()
{
    int arr[] = {8,1,3,20,6,30,60};
    int n = 7;

    int s = 0;
    int e = n-1;

    quickSort(arr, s, e);
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    cout<< endl;
 return 0;
}