//
// Created by XIE on 2021/4/21.
// https://www.luogu.com.cn/problem/P1320

#include <iostream>
#include <string>

using namespace std;

int main() {
    int i = 0, flag = 0, cnt = 1;
    string s[206];
    while (cin >> s[i]) {
        i++;
    }
    cout << i << " ";
    if (s[0][0] != '0') cout << "0 ";
    for (int j = 0; j < i; j++) {
        for (int k = 0; k < i - 1; k++) {
            if (k == 0 && j != 0) {
                if (s[j - 1][i - 1] != s[j][0]) {
                    cout << cnt << " ";
                    cnt = 1;
                } else cnt++;
            }
            if (s[j][k] == s[j][k + 1]) {
                cnt++;
            }
            if (s[j][k] != s[j][k + 1]) {
                cout << cnt << " ";
                cnt = 1;
            }
        }
    }
    cout << cnt;
    return 0;
}