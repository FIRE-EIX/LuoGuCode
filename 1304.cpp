//
// Created by XIE on 2021/2/26.
//

#include <iostream>

using namespace std;

bool isPrime(int a) {
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) return false;
    }
    return true;
}

void ans(int a) {
    if (isPrime(a-2)) {
        cout << a << "=" << "2+" << a-2 << endl;
        return;
    }
    for (int i = 3; i + 3 <= a; i += 2) {
        if (isPrime(i) && isPrime(a - i)) {
            cout << a << "=" << min(i, a - i) << "+" << max(i, a - i) << endl;
            return;
        }
    }
}

int main() {
    int n;
    cin >> n;
    cout << "4=2+2" << endl;
    if (n > 4) {
        for (int i = 6; i <= n; i += 2) {
            ans(i);
        }
    }
    return 0;
}