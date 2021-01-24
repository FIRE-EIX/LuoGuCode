//
// Created by EIX on 2020/11/29.
//https://www.luogu.com.cn/problem/P5712
//
#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0 || n == 1) cout << "Today, I ate " << n << " apple.";
    else cout << "Today, I ate " << n << " apples.";
    return 0;
}
