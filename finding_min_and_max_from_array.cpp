#include <iostream>
#include <climits> 
using namespace std;

int getMax(int arr[], int size){
    int maxValue = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>maxValue){
            maxValue = arr[i];
        }
    }
    return maxValue;
}

int getMin(int arr[], int size){
    int minValue = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<minValue){
            minValue = arr[i];
        }
    }
    return minValue;
}

int main() {
    int size;
    cin >> size;
    int arr[100];
    
    //taking array input
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }
    
    int maxValue = getMax(arr, size);
    cout << "The max value is : " << maxValue << endl;
    
    int minValue = getMin(arr, size);
    cout << "The min value is : " << minValue << endl;
    
    return 0;
}