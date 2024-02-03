#include<bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1;//cin >> t;
  while(t--){
    int n;cin >> n;

    for(int i = 1; i <= n; i++){
      if(n % i == 0){
        cout << i << ' ';
      }
    }
  }
  return 0;
}
