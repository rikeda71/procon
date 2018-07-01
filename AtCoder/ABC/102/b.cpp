#include <iostream>

using namespace std;

int main(){
    int n;
    int t;
    int max=0;
    int min=1000000000;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        if (max < t) {
            max = t;
        }
        if (min > t) {
            min = t;
        }
    }
    cout << max - min << endl;
}
