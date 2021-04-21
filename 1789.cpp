//
// Created by XIE on 2021/4/21.
// https://www.luogu.com.cn/problem/P1789

#include <iostream>

using namespace std;
int ans[106][106];
int n, m, k; //n方阵大小，m火把数量，k萤石数量
bool isLegal(int x, int y) {
    if (x >= 1 && x <= n && y >= 1 && y <= n) return true;
    return false;
}

int main() {
    int cnt;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            ans[i][j] = 1;
        }
    }
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        ans[x][y] = 0;
        for (int j = -2; j <= 2; j++) {
            if (isLegal(x + j, y)) ans[x + j][y] = 0;
            if (isLegal(x, y + j)) ans[x][y + j] = 0;
        }
    }
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        ans[x][y] = 0;
        for (int j = -2; j <= 2; ++j) {
            for (int l = -2; l <= 2; ++l) {
                if (isLegal(x + j, y + l)) ans[x + j][y + l] = 0;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (ans[i][j] == 1) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}