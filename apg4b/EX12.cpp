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
    string S;
    int i = 1;
    cin >> S;

    int ans = 1;

    while (i < S.size())
    {
        if (S.at(i) == '+')
        {
            ans ++;
        }        
        else if(S.at(i) == '-')
        {
            ans --;
        }
        
        i++;
    }
    cout << ans << endl;
}