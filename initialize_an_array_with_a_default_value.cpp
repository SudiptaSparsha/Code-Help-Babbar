#include <iostream>
#include <algorithm> // Required for fill()
using namespace std;

int main() {
    int arr[10];
    fill(arr, arr + 10, 5); // Fill all 10 elements with value 5

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}