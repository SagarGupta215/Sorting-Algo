#include<iostream>

using namespace std;

void BubbleSort_Opti(int arr[] , int n){
    for(int round = 1; round < n; round++){
        bool swapped = 0;
        for(int j = 0; j < n-round; j++){
            if(arr[j] > arr[j+1]){
                swapped = true;
                swap(arr[j] , arr[j+1]);
            }
        }
        if(!swapped){
            break;
        }
    }
    
}

void BubbleSort(int arr[] , int n){
    // har ith round me ith largest element ko uski sahi jagah me rakh dena
    for(int round = 1; round < n; round++){
        for(int j = 0; j < n-round; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }    
}

int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    BubbleSort_Opti(arr,n);
    for(int i = 0; i < n; i++){
        cout <<  arr[i] << " ";
    }

     
    return 0;
}