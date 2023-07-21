#include<iostream>
using namespace std;
void merge(int arr[], int s, int e){
    int mid = (s+e)/2;

    //lenght of arr to create new arr
    int len1 = mid - s +1;
    int len2 = e - mid;
    //creating new arr
    int* left = new int[len1];
    int* right = new int[len2];

    //copy karo
    int k = s;
    for(int i =0; i<len1; i++){
        left[i] = arr[k];
        k++;
    }
    k = mid+1;
    for(int i =0; i<len2; i++){
        right[i] = arr[k];
        k++;
    }
    int leftIndex =0;
    int rightIndex=0;
    int mainArray = s;
    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArray++] = left[leftIndex++];
        }
        else{
            arr[mainArray++] = right[rightIndex++];
        }
    }
    //copy logic when one arr is short and finish
    while(leftIndex < len1){
        arr[mainArray++] = left[leftIndex++];
    }
    while(rightIndex < len2){
        arr[mainArray++] = right[rightIndex++];
    }
}

void mergeSort(int arr[], int s, int e){
    //base cond
    if(s >= e){
        return;
    }
    int mid = (s+e)/2;

    //RE call
    //left part
    mergeSort(arr, s ,mid);
    //right part
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}
int main()
{
    int arr[] = {2,5,4,8,9,1,22,3};
    int n = 7;
    int s =0;
    int e = n-1;

    mergeSort(arr, s, e);
    for(int i = 0; i<n; i++){
        cout <<arr[i] << " ";
    }
 return 0;
}