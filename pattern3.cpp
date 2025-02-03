#include <iostream>
using namespace std;

int main() {
  int n, row = 1, cnt;
  cin >> n;
  while(row <= n){
    cnt = row;
    int col = 1;
    while(col <= row){
      cout << cnt << " ";
      cnt--;
      col++;
    }
    cout << endl;
    row++;
  }
}