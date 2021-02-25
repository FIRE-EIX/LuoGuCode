//
// Created by XIE on 2021/2/25.
// https://www.luogu.com.cn/problem/P5743

#include <iostream>

using namespace std;

int main() {
    int n;
    long long ans = 1;
    cin >> n;
    while (n-- > 1) {
        ans = (ans + 1) * 2;
    }
    cout << ans;
    return 0;
}