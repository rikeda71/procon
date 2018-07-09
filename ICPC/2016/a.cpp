#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long int> a(n);
    long int min = 1000000;
    long int t;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++){
        t = a[i + 1] - a[i];
        min = t < min ? t : min;
    }
    cout << min << endl;
}

