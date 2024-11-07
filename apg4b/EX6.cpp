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
  int A, B;
  string op;
  cin >> A >> op >> B;

  if (op == "+") {
    cout << A + B << endl;
  }
  else if (op == "-")
  {
    cout << A - B << endl;
  }
  else if (op == "*")
  {
    cout << A * B << endl;
  }
  else if (op == "/")
  {
    if (B != 0)
    {
        cout << A / B << endl;
    }
    else
    {
        cout << "error" << endl;
    }
    
  }
  else
  {
    cout << "error" << endl;
  }
}
