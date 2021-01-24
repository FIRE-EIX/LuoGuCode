//
// Created by EIX on 2020/11/29.
//https://www.luogu.com.cn/problem/P5716
#include<iostream>

using namespace std;

int main() {
    int mon[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, m;
    cin >> y >> m;
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0 && y % 100 == 0)) mon[2] = 29;
    cout << mon[m];
    return 0;
}
