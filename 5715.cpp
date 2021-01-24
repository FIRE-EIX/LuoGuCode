//
// Created by EIX on 2020/11/29.
//https://www.luogu.com.cn/problem/P5715
#include<iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[4];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort(a, a + 3);
    cout << a[0] << " " << a[1] << " " << a[2];
    return 0;
}
