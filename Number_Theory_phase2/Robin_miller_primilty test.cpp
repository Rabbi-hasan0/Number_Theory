#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MILLER_RABIN_ITERATIONS = 50;

int lowestSetBit(int a) {
    int lowBit = -1;
    int b = a & -a;
    while (b) {
        b >>= 1;
        lowBit += 1;
    }
    return lowBit;
}

bool isProbablePrime(int a) {
    if (a == 2) {
        return true;
    }
    if (a == 1 || a % 2 == 0) {
        return false;
    }

    int m = a - 1;
    int lowestBit = lowestSetBit(m);
    m >>= lowestBit;

    for (int i = 0; i < MILLER_RABIN_ITERATIONS; ++i) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(2, a - 1);
        int b = dis(gen);
        int z = 1;
        for (int bit : std::to_string(m)) {
            z = (z * z) % a;
            if (bit == '1') {
                z = (z * b) % a;
            }
        }
        int j = 0;
        while (!((j == 0 && z == 1) || z == a - 1)) {
            if ((j > 0 || z == 1) || (j + 1 == lowestBit)) {
                return false;
            }
            ++j;
            z = (z * z) % a;
        }
    }
    return true;
}

int32_t main() {
  ios_base::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1;//cin >> t;
  while(t--){
    //auto st = clock();  //For time count;
    int n;cin >> n;
    cout << (isProbablePrime(n) ? "true\n" : "false\n");
   // cerr << 1.0 * (clock() - st) /CLOCKS_PER_SEC << '\n'; // Same for time count;
  }
}
