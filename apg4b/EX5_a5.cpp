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
    int s[] = {};
    string st;
    int count = 0;

    cin >> st;

    for (int i = 0; i < 3; i++)
    {
        if (st[i] == '1')
        {
            count++;
        }
        
    }
    


    cout <<  count  << endl;
}

