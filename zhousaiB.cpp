//
// Created by EIX on 2020/11/29.
//

#include<iostream>
#include<string>

using namespace std;

int main() {
    string s;
    int flag = 0;
    cin >> s;
    if (s.size() == 3) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c') continue;
            else flag = 1;
        }
    }
    if (s.size() != 3) cout << "no";
    else if (flag == 0) cout << "yes";
    else cout << "no";
    return 0;
}