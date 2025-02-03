#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int row = 1;
  while(row <= n){
    //print space
    int space = 1;
    while(space <= n-row){
      cout << " ";
      space++;
    }

    //print upto row
    int i = 1;
    while(i <= row){
      cout << i;
      i++;
    }

    //print from row-1 to 1
    int j = row-1;
    while(j > 0){
      cout << j;
      j--;
    }
    cout << endl;
    row++;
  }
}