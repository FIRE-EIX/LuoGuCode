//
// Created by EIX on 2020/12/1.
//

#include <iostream>

using namespace std;

bool isPrime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int l;
    int ans = 0, cnt = 0;
    cin >> l;
    if (l == 1) {
        cout << 0;
        return 0;
    }
    for (int i = 2; ans < l; i++) {
        if (isPrime(i)) {
            ans += i;
            cout << i << endl;
            cnt++;
        }
        if (ans + i > l) break;
    }
    cout << cnt;
    return 0;
}