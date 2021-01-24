//
// Created by EIX on 2020/12/2.
//https://www.luogu.com.cn/problem/P1478

#include <iostream>
#include <algorithm>

using namespace std;

struct apple {
    int x, y;
} app[5006];

bool cmp(apple x1, apple y1) {
    return x1.y < y1.y;
}

int main() {
    ios::sync_with_stdio(false);
    int n, s, a, b, mh, ans = 0;
    cin >> n >> s >> a >> b;
    mh = a + b;
    for (int i = 0; i < n; i++) {
        cin >> app[i].x >> app[i].y;
    }
    sort(app, app + n, cmp);
    for (int i = 0; i < n; i++) {
        if (s < app[i].y) break;
        else if (app[i].x <= mh) {
            ans++;
            s -= app[i].y;
        }
    }
    cout << ans;
    return 0;
}