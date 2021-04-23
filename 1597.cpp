//
// Created by XIE on 2021/4/23.
// https://www.luogu.com.cn/problem/P1597

#include <iostream>
#include <string>

using namespace std;
int a, b, c, i;
string s;

int main() {
    cin >> s;
    while (i < s.length()) {
        if (s[i] == 'a') {
            if (s[i + 3] == 'a')
                a = a;
            else if (s[i + 3] == 'b')
                a = b;
            else if (s[i + 3] == 'c')
                a = c;
            else
                a = s[i + 3] - '0';
        }
        if (s[i] == 'b') {
            if (s[i + 3] == 'b')
                b = b;
            else if (s[i + 3] == 'a')
                b = a;
            else if (s[i + 3] == 'c')
                b = c;
            else
                b = s[i + 3] - '0';
        }
        if (s[i] == 'c') {
            if (s[i + 3] == 'c')
                c = c;
            else if (s[i + 3] == 'a')
                c = a;
            else if (s[i + 3] == 'b')
                c = b;
            else
                c = s[i + 3] - '0';
        }
        i += 5;
    }
    cout << a << " " << b << " " << c;
    return 0;
}