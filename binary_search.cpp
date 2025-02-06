#include <iostream>
using namespace std;

void takeArrayInput(int arr[], int size){
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
}

int binarySearch(int arr[], int left, int right, int key){
    int mid = (left+right)/2;
    if(arr[mid] == key) return mid;
    else if(arr[mid] > key) {
        return binarySearch(arr, left, mid-1, key);
    }
    else if(arr[mid] < key){
        return binarySearch(arr, mid+1, right, key);
    }
    else{
        return -1;
    }
}

int main() {
    int size, key;
    cin >> size;
    int arr[size];
    takeArrayInput(arr, size);
    cin >> key;
    
    int index = binarySearch(arr, 0, size-1, key);
    
    cout << "Index of the key is : " << index << endl;
    
    return 0;
}