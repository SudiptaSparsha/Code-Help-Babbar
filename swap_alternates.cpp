#include <iostream>
using namespace std;

void takeArrayInput(int arr[], int size){
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
}

//swap alternates means swaping adjacent elements
void swapAlternates(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
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
    
    swapAlternates(arr, size);
    
    printArray(arr, size);
    
    return 0;
}