//Time complexity : O(n*log(log(n)); 

#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 7;
vector<int> v;
bool check[N]; // Using bool function for less memory complexity;

void find_prime(int n){
  for(int i = 2; i * i <= n; i++){
     if(!check[i]){
      for(int j = i * i; j <= n; j += i){
         check[j] = true;
      }
     }
  }
  for(int i = 2; i <= n; i++){
    if(!check[i]){
      v.push_back(i);
    }
  }
}

int32_t main(){
  ios_base::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1;//cin >> t;
  while(t--){
    //auto st = clock();  For time count;
    int n;cin >> n;
    find_prime(n);
    for(auto x: v){
      cout << x << ' ';
    }cout << '\n';
   //cerr << 1.0 * (clock() - st) /CLOCKS_PER_SEC << '\n'; // Same for time count;
  }
  return 0;
}
