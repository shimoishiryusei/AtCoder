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
    int N;
    int sum=0,avg=0;

    cin >> N;

    vector<int> A(N);

    for(int i=0;i<N;i++){
        cin >> A.at(i);
        sum += A.at(i);
    }

    avg = sum / N;
    for(int i=0;i<N;i++){
        cout << std::abs(A.at(i) - avg) << endl; 
    }

}