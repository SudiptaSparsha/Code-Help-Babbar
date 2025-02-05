#include <iostream>
using namespace std;

void takeArrayInput(int arr[], int size){
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
}

void sort01(int arr[], int size){
    int i=0, j=size-1;
    while(i<j){
        if(arr[i] == 0) i++;
        else if(arr[j] == 1) j--;
        else{
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    takeArrayInput(arr, size);
    
    sort01(arr, size);
    
    printArray(arr, size);
    
    return 0;
}