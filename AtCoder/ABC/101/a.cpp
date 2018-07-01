#include <iostream>
#include <string>

using namespace std;

int main(){
  int sum = 0;
  string str;
  cin >> str;
  for (int i=0; i < str.length(); i++){
    if (str.at(i) == '+') sum++;
    else sum--;
  }
  cout << sum << endl;
}
