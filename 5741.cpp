//
// Created by XIE on 2021/4/20.
// https://www.luogu.com.cn/problem/P5741

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct student {
    string name;
    int ch, ma, en, cnt;
} stu[1006];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name >> stu[i].ch >> stu[i].ma >> stu[i].en;
        stu[i].cnt = stu[i].ch + stu[i].ma + stu[i].en;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(stu[i].ch - stu[j].ch) <= 5 && abs(stu[i].ma - stu[j].ma) <= 5 &&
                abs(stu[i].en - stu[j].en) <= 5 && abs(stu[i].cnt - stu[j].cnt) <= 10) {
                if (stu[i].name > stu[j].name)//判断字典序
                    cout << stu[j].name << " " << stu[i].name << endl;
                else cout << stu[i].name << " " << stu[j].name << endl;
            }
        }
    }
    return 0;
}