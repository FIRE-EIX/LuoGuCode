//
// Created by EIX on 2020/11/29.
//
#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        if (a % 3 == 0 || b % 3 == 0 || (a + b) % 3 == 0) cout << "yes";
        else cout << "no";
    }

    return 0;
}
