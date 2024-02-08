//TIme complexity: O(log(n));

// Gcd -> [ __gcd(a, b) ]              complexity: O(log(n));
// Lcm -> [ (a * b) / __gcd(a, b) ]


#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
  if(a == 0)return b;
  if(b == 0)return a;
  if(a < b)swap(a, b);
  return GCD(a % b, b);
}

int32_t main(){
  ios_base::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1;//cin >> t;
  while(t--){
    int a, b;cin >> a >> b;
    cout << GCD(a, b) << '\n';
  }
  return 0;
}
