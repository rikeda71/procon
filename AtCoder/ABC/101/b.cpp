#include <iostream>
#include <string>

using namespace std;

int main(){
  string str;
  bool flag;
  int s = 0;
  cin >> str;
  for (int i=0; i < str.length(); i++){
    s += int(str.at(i)) - '0';
  }
  if (stoi(str) % s == 0) {
    cout << "Yes" << endl;
  }
  else cout << "No" << endl;
}
