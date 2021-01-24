//
// Created by EIX on 2020/11/30.
//https://www.luogu.com.cn/problem/P1307

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, flag = 0;
    string s, ns;
    cin >> s;
    if (s[0] == '-') ns = '-' + s.assign(s.rbegin(), s.rend() - 1);
    else ns = s.assign(s.rbegin(), s.rend());
    if (ns.size() == 1) {
        cout << ns;
        return 0;
    }
    for (int i = 0; i < ns.size(); i++) {
        if (ns[i] == '-') {
            cout << "-";
            continue;
        }
        if (flag == 0 && ns[i] == '0') continue;
        else {
            flag = 1;
            cout << ns[i];
        }
    }
    return 0;
}