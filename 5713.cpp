//
// Created by EIX on 2020/11/29.
//https://www.luogu.com.cn/problem/P5713
#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n * 5 < n * 3 + 11) cout << "Local";
    else cout << "Luogu";
    return 0;
}

