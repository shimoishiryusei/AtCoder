#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cassert>
using namespace std;

int main() {
  int p;
  cin >> p;

  // パターン1
  if (p == 1) {
    int N;
    int price;
    cin >> N;
    cin >> price;
    cout << price * N << endl;
  }

  // パターン2
  if (p == 2) {
    int N;
    string text;
    int price;
    cin >> text >> price;
    cin >> N;
    cout << text << "!" << endl;
    cout << price * N << endl;
  }


}
