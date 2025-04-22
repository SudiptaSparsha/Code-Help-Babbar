#include <iostream>
using namespace std;

void takeArrayInput(int arr[], int size){
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
}

int binarySearch(int arr[], int left, int right, int key){
    if(left > right) return -1;
    
    int mid = left + (right - left)/2; //do this instead of (l+r)/2 so that mid can never go out of INT_MAX
    
    if(arr[mid] == key) return mid;
    
    else if(arr[mid] > key) {
        return binarySearch(arr, left, mid-1, key);
    }
    else{
        return binarySearch(arr, mid+1, right, key);
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