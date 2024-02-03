

#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int n){
  if(n % 2 == 0 && n != 2) return false;
    for(int i = 2; i * i <= n; i += 2){
        if(n % i == 0){
          return false;
        }
    }
  return true;
}

int32_t main(){
  ios_base::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1;//cin >> t;
  while(t--){
    int n;cin >> n;
    if(isPrime(n)){
      cout << "Prime..\n";
    }else{
      cout << "Not Prime..\n";
    }
  }
  return 0;
}
