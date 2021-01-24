//
// Created by EIX on 2020/12/4.
//https://www.luogu.com.cn/problem/P5742

#include<iostream>

using namespace std;

struct student {
    int num, score, s, z;
} stu[1006];

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].num >> stu[i].score >> stu[i].s;
        stu[i].z = stu[i].score * 0.7 + stu[i].s * 0.3;
        if (stu[i].z >= 80 && stu[i].score + stu[i].s > 140) {
            cout << "Excellent" << endl;
        } else {
            cout << "Not excellent" << endl;
        }
    }
    return 0;
}