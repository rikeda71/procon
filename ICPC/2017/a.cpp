#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    int t, sum, max = -1;
    vector<int> a;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < n - 1; i++) {
        for (int k = i + 1; k < n; k++){
            sum = a.at(i) + a.at(k);
            if ( sum <= m && max < sum ) { max = sum; }
        }
    }

    if (max > 0) { cout << max << endl; }
    else cout << "NONE" << endl;
}
