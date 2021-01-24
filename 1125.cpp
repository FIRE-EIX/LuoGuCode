//
// Created by EIX on 2020/12/2.
//https://www.luogu.com.cn/problem/P1125

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPrime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int a[30] = {0};

int main() {
    ios::sync_with_stdio(false);
    string s;
    int max = 1, min = 1, flag1 = 0, flag2 = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        a[s[i] - 'a']++;
    }
    sort(a, a + 26);
    if (a[0] != 0) {
        min = a[0];
        flag1 = 1;
    }
    for (int i = 1; i <= 26; i++) {
        if (a[i] != 0 && a[i - 1] == 0 && flag1 == 0) {
            min = a[i];
            flag1 = 1;
        }
        if (a[i] != 0 && a[i + 1] == 0 && flag2 == 0) {
            max = a[i];
            flag2 = 1;
            break;
        }
    }
    if (max - min <= 1) {
        cout << "No Answer" << endl << 0;
    } else {
        if (isPrime(max - min)) {
            cout << "Lucky Word" << endl << max - min;
        } else {
            cout << "No Answer" << endl << 0;
        }
    }
    return 0;
}