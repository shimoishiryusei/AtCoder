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
    int A,B,C;
    cin >> A >> B >> C;

    int max_h,min_h;

    max_h = max(max(A,B),C);
    min_h = min(min(A,B),C);

    cout << max_h - min_h << endl;

}