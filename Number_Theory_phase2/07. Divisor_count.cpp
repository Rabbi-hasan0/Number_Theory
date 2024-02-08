//Time complexity -> O(n(log(log(n))))

#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 7;
vector<int> v;
int cnt[N];

int32_t main(){
  ios_base::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1;//cin >> t;
  while(t--){
    int n;cin >> n;

    for(int i = 1; i <= n; i++){
      for(int j = i; j <= n; j += i){
         cnt[j] ++;
      }
    }
    for(int i = 1; i <= n; i++){
      cout << cnt[i] << ' ';
    }
  }
  return 0;
}
