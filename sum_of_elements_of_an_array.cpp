#include <iostream>
#include <climits> 
using namespace std;

void printArraySum(int array[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum+array[i];
    }
    cout << "Sum of the all elements of the array : " << sum << endl;
}

int main() {
    int size;
    cin >> size;
    int arr[1000];
    
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    
    printArraySum(arr, size);
    
    return 0;
}