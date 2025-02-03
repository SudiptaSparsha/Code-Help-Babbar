#include <iostream>
using namespace std;

int findAnswer(int n, int r){
    int ans = 1;
    for(int i=1; i<=r; i++){
        ans = ans*n;
        n--;
    }
    return ans;
}

int nCr(int n, int r){
    if(r > n) return 0;
    else if(r == 0 || r == n){
        r = n;
    }else if(r > n/2){
        r = n-r;
    }
    int ans = findAnswer(n, r);
    return ans;
}

int main()
{
    int n, r;
    cin >> n >> r;
    int ans = nCr(n, r);
    cout << "nCr = " << ans;
    return 0;
}
