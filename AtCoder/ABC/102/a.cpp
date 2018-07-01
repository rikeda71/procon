#include <iostream>

using namespace std;

int main(){
    int a, ans;
    cin >> a;
    if (a % 2 == 0) {
        ans = a;
    }
    else {
        ans = 2 * a;
    }
    cout << ans << endl;
}
