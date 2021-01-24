//
// Created by EIX on 2020/12/6.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int way[10006];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int dp[106][106], map[106][106];
        int m, n;
        cin >> m >> n;
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> map[i][j];
            }
        }
        dp[1][1] = map[1][1];
        for (int i = 2; i <= m; i++) {
            dp[i][1] = map[i][1] + dp[i - 1][1];
        }
        for (int j = 2; j <= n; j++) {
            dp[1][j] = map[1][j] + dp[1][j - 1];
        }
        for (int i = 2; i <= m; i++) {
            for (int j = 2; j <= n; j++) {
                dp[i][j] = map[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        int x = m, y = n, w = 1;
        while (x > 0 && y > 0) {
            if (x == 1 && y == 1) {
                break;
            } else if (x == 1) {
                way[w] = map[x][y - 1];
                w++, y--;
            } else if (y == 1) {
                way[w] = map[x - 1][y];
                w++, x--;
            } else {
                if (dp[x - 1][y] < dp[x][y - 1]) {
                    way[w] = map[x - 1][y];
                    w++, x--;
                } else {
                    way[w] = map[x][y - 1];
                    w++, y--;
                }
            }
        }
        cout << dp[m][n] << endl;
        for (int i = w - 1; i > 0; i--) {
            cout << way[i] << " ";
        }
        cout << map[m][n] << " " << endl;
    }
    return 0;
}