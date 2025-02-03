#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int row = 1;
  while(row <= n){
    //print upto n
    int i = 1;
    while(i <= (n-row+1)){
      cout << i;
      i++;
    }

    //print *
    int star = 1;
    while(star <= (row-1)*2){
      cout << "*";
      star++;
    }

    //print from n to 1
    int j = n-row+1;
    while(j > 0){
      cout << j;
      j--;
    }
    cout << endl;
    row++;
  }
}