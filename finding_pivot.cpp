//finding pivot in a sorted and rotated array
/*
A pivot in a sorted and rotated array is the smallest element in the array. In a sorted array that has been rotated, the pivot element is where the array's rotation occurred.

For example, in the array [3,4,5,6,7,1,2]:

Original sorted array would be: [1,2,3,4,5,6,7]
After rotation: [3,4,5,6,7,1,2]
The pivot element is 1
*/

#include <iostream>
using namespace std;

int findThePivot(int arr[], int left, int right){
  int mid = left + (right - left)/2;
  if(left >= right)
    return mid;
  else if (arr[mid] > arr[0]){
    return findThePivot(arr, mid+1, right);
  }
  else{
    return findThePivot(arr, left, mid);
  }
}

int main() {
  int arr[] = {3,4,5,6,7,1,2};
  int n = sizeof(arr)/sizeof(arr[0]);
  int pivotIndex = findThePivot(arr, 0, n-1);
  cout << "The pivot index is: " << pivotIndex << endl;
  cout << "The pivot element is: " << arr[pivotIndex] << endl;
  return 0;
}