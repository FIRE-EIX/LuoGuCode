//
// Created by XIE on 2021/4/12.
// https://www.luogu.com.cn/problem/P3156

#include <iostream>
#include <cstdio>

using namespace std;
int sno[2000006];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &sno[i]);
    }
    for (int j = 0; j < m; j++) {
        int t = 0;
        scanf("%d", &t);
        printf("%d\n", sno[t]);
    }
    return 0;
}