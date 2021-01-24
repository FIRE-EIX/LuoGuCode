//
// Created by EIX on 2020/11/30.
//https://www.luogu.com.cn/problem/P5726

#include <iostream>
#include<cstdio>
#include <algorithm>

using namespace std;

int main() {
    int n;
    double cnt = 0;
    cin >> n;
    int a[1006] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        cnt += a[i];
    }
    sort(a, a + n);
    cnt = cnt - (a[0] + a[n - 1]);
    printf("%.2f", cnt / (n - 2));
    return 0;
}