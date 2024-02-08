
//Time complexity: O(sqrt(n));

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1;//cin >> t;
  while(t--){
    int n;cin >> n;

    for(int i = 2; i * i <= n; i++){
      while(n % i == 0){
        cout << i << ' ';
        n /= i;
      }
    }
    if(n > 1)cout << n;
    cout << '\n';
  }
  return 0;
}
