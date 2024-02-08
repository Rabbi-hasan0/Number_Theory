//TIme complexity: O(sqrt(n) * log n);
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    
    vector<ll> factors;
    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        cout << n << '\n';
    }else{
    	cout << factors[factors.size() - 1] << '\n';
    }

    // for (auto factor : factors) {
    //     cout << factor << '\n';
    // }

    return 0;
}
