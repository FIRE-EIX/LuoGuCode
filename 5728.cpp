//
// Created by EIX on 2021/1/16.
//https://www.luogu.com.cn/problem/P5728

#include <iostream>
#include <cmath>

using namespace std;
struct student {
    int ch, ma, en;
} stu[1010];

int ans = 0;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> stu[i].ch >> stu[i].ma >> stu[i].en;
    }
    for (int j = 1; j < n; j++) {
        for (int k = j + 1; k <= n; k++) {
            if ((abs(stu[j].en - stu[k].en) <= 5) && (abs(stu[j].ma - stu[k].ma) <= 5) &&
                (abs(stu[j].ch - stu[k].ch) <= 5) && (abs(stu[j].ch+stu[j].ma+stu[j].en - stu[k].ch-stu[k].ma-stu[k].en) <= 10)) {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}

