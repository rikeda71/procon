#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;
typedef long long ll;

ll ans(vector<ll> v, int b){
  ll sum = 0;
  for(int i = 0; i < v.size(); i++){
    sum += abs(v[i] - b);
  }
  return sum;
}

int main(){
  int b;
  vector<ll> v;
  ll a, t, n;

  cin >> n;
  for(int i = 0; i < n; i++){ cin >> t; v.push_back(t - i - 1); }
  sort(v.begin(), v.end());
  b = v[n / 2];
  a = ans(v, b);
  cout << a << endl;
}
