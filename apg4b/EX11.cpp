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
    int N,A;
    cin >> N >> A;
    int ans = A;

    for(int i=0; i < N; i++){
        string op;
        int B;

        cin >> op >> B;
        if (op == "+")
        {
            ans += B;
        }
        else if (op == "-")
        {
            ans -= B;
        }
        else if (op == "*")
        {
            ans *= B;
        }
        else if (op == "/")
        {
            if(B == 0){
                cout << "error" << endl;
                break;
            }else{
                ans /= B;
            }
        }
        cout << i+1 << ":" << ans << endl;
    }
}