// https://codeforces.com/contest/610/problem/A
#include <bits/stdc++.h>
using namespace std;


int main() {
    ll n;
    cin >> n;
    (n%2 == 0) ? ((n/2)%2 == 0) ? cout << 0: cout << 1:(((n - 1)/2)%2 == 0) ? cout << 1:cout << 0;
    return 0;
}
