//
// Created by XIE on 2021/4/21.
//

#include <iostream>

using namespace std;
int ans[1000006] = {0};

int main() {
    int n, max = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        double ai;
        int t;
        cin >> ai >> t;
        for (int j = 1; j <= t; ++j) {
            int a = ai * j;
            if (a > max) max = a;
            ans[a] = ans[a] ^ 1;
        }
    }
    for (int i = 1; i <= max; ++i) {
        if (ans[i] == 1) {
            cout << i;
            break;
        }
    }
    return 0;
}