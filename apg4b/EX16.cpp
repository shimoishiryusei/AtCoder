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
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  int pre;
  int i=0;
  string ans = "NO";
  for(int x : data){
    if(i==0){
        pre = x;
        i++;
        continue;
    }else{
        if(pre == x){
            ans = "YES";
            break;
        }
        pre = x;
        i++;
    }
  }

  cout << ans << endl;
}
