//
// Created by XIE on 2021/4/20.
// https://www.luogu.com.cn/problem/P5461

#include <iostream>

using namespace std;

int square[1036][1036] = {0};

void fun(int s, int x, int y) {
    if (s == 2) {
        square[x][y] = 0;
        return;
    }
    for (int i = x; i < x + s / 2; i++) {
        for (int j = y; j < y + s / 2; j++) {
            square[i][j] = 0;
        }
    }
    fun(s / 2, s / 2 + x, y);
    fun(s / 2, x, s / 2 + y);
    fun(s / 2, s / 2 + x, s / 2 + y);
};

int main() {
    int n, side;
    cin >> n;
    side = 2 << (n - 1);
    for (int i = 1; i <= side; i++) {
        for (int j = 1; j <= side; j++) {
            square[i][j] = 1;
        }
    }
    fun(side, 1, 1);
    for (int i = 1; i <= side; i++) {
        for (int j = 1; j < side; j++) {
            cout << square[i][j] << " ";
        }
        cout << square[i][side] << endl;
    }
    return 0;
}