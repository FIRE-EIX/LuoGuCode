//
// Created by XIE on 2021/4/23.
// https://www.luogu.com.cn/problem/P5734

#include<iostream>
#include<string>

using namespace std;
int n, a;
string s, c1, b1;
int b, c;

int main() {
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++) {
        cin >> a;
        switch (a) {
            case 1:
                cin >> b1;
                s += b1;
                cout << s << endl;
                break;
            case 2:
                cin >> b >> c;
                c1 = s.substr(b, c);
                s = c1;
                cout << s << endl;
                break;
            case 3:
                cin >> b >> b1;
                s.insert(b, b1);
                cout << s << endl;
                break;
            case 4:
                cin >> b1;
                if (s.find(b1) < s.size())
                    cout << s.find(b1) << endl;
                else
                    cout << -1 << endl;
                break;
        }
    }
    return 0;
}