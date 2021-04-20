//
// Created by XIE on 2021/4/19.
// https://www.luogu.com.cn/problem/P3741
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, flag = 0, ans = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'V' && s[i + 1] == 'K') {
            ans++;
            s[i] = 'v';
            s[i + 1] = 'k';
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (s[i + 1] == s[i]) {
            flag = 1;
            break;
        }
    }
    cout << ans + flag;
    return 0;
}
