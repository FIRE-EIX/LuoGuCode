//
// Created by XIE on 2021/4/21.
// https://www.luogu.com.cn/problem/P1554

#include <iostream>

using namespace std;
int ans[10] = {0};

void findNumber(int n) {
    while (n != 0) {
        ans[n % 10]++;
        n /= 10;
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        findNumber(i);
    }
    for (int i = 0; i < 10; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}