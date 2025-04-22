#include <iostream>
using namespace std;

int findSqrIntegerParttUsingBinarySearch(int left, int right, int number, int ans) {
        int mid = left + (right -left)/2;
        if(left > right) return ans;
        else if(1LL * mid * mid == number) return mid;
        else if (1LL * mid * mid > number) return findSqrIntegerParttUsingBinarySearch(left, mid-1, number, ans);
        else return findSqrIntegerParttUsingBinarySearch(mid+1, right, number, mid);
}

double precisedSqrt(int number, int wholePart, int precision){
  double ans = wholePart;
  double factor = 1;
  for(int i = 0; i < precision; i++) {
    factor /= 10;
    while(ans * ans <= number) {
      ans += factor;
    }
    ans -= factor;
  }
  return ans;
}


int main() {
  int n, precision;
  cout << "Enter the number : ";
  cin >> n;
  cout << "Enter the precison you want : ";
  cin >> precision;
  int wholePart = findSqrIntegerParttUsingBinarySearch(0, n, n, 0);
  cout << "Precised squre root answer is : " << precisedSqrt(n, wholePart, precision) << endl;
  return 0;
}