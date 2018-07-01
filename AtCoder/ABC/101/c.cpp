#include <iostream>

using namespace std;

int main(){
    int n, k, t;
    int cnt = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> t;
    for (int i = 0; i < n; i++) {
      cnt++;
      if(n <= k + (k - 1) * (cnt - 1)) break;
    }
    cout << cnt << endl;
}
