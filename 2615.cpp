//
// Created by EIX on 2020/12/1.
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    int a[46][46] = {0};
    cin >> n;
    a[1][n / 2 + 1] = 1;
    int x = 1;
    int y = n / 2 + 1;
    for (int k = 2; k <= n * n; k++) {
        if (x == 1 && y != n) {
            a[n][y + 1] = k;
            x = n;
            y = y + 1;
        } else if (x != 1 && y == n) {
            a[x - 1][1] = k;
            x = x - 1;
            y = 1;
        } else if (x == 1 && y == n) {
            a[x + 1][y] = k;
            x += 1;
        } else if (x != 1 && y != n) {
            if (a[x - 1][y + 1] == 0) {
                a[x - 1][y + 1] = k;
                x = x - 1;
                y += 1;
            } else {
                a[x + 1][y] = k;
                x += 1;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == n) {
                cout << a[i][j] << endl;
            } else {
                cout << a[i][j] << " ";
            }
        }
    }
    return 0;
}