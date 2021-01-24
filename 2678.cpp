//
// Created by EIX on 2020/11/26.
//
#include <iostream>
#include<cstdio>

using namespace std;
long long l, n, m, ans = 0;
long long da[50006] = {0};
int main() {
    cin >> l >> n >> m;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &da[i]);//读数据
    }
    int mid, lef = 1, rig = l;
    while (lef <= rig) {
        mid = (lef + rig) >> 1;
        int count = 0;
        for (int i = 1, cur = 0; i <= n; i++) {
            if (da[i] - da[cur] < mid) {
                count++;//如果比mid大就移除，计数器加一
            } else {
                cur = i;
            }
        }
        if (count > m) {
            rig = mid - 1;
        } else {
            ans = mid;
            lef = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
