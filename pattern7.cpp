#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int row = 1;
  while(row <= n){
    //print space
    int space = n - row;
    while(space > 0){
      cout << " ";
      space--;
    }
    //print *
    int col = 1;
    while(col <= row){
      cout << "*";
      col++;;
    }
    cout << endl;
    row++;
  }
}