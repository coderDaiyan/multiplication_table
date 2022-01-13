#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // solve
    int n; cin >> n;
    for(int i = 1; i <= 12; i++) {
    	cout << n << " * " << i << " = " << n * i << '\n';
    }
}