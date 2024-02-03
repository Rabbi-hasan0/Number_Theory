#include<bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1;//cin >> t;
  while(t--){
    int n;cin >> n;

    set<int>divs;
    for(int i = 1; i * i <= n; i++){
    	if(n % i == 0){
    		divs.insert(i);
    		divs.insert(n / i);
    	}
    }
    for(auto x:divs){
    	cout << x << ' ';
    }
  }
  return 0;
}
