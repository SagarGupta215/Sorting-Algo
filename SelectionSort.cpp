#include<iostream>

using namespace std;

void SelectionSort(int arr[] , int n){

    for(int i = 0; i < n-1; i++){
        int minInd = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minInd]){
                minInd = j;
            }
        }
        swap(arr[i],arr[minInd]);
    }
}

int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    SelectionSort(arr,n);
    for(int i = 0; i < n; i++){
        cout <<  arr[i] << " ";
    }

    return 0;
}