//
// Created by XIE on 2021/4/22.
//

#include <iostream>

using namespace std;
int map[16][16] = {0};
int tempMap[16][16] = {0};
int tempMap2[16][16] = {0};
int transMap[16][16] = {0};

bool compare(int a[16][16], int b[16][16], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] != b[i][j]) return false;
        }
    }
    return true;
}

//转90°
void toNinety(int a[16][16], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            tempMap[j][n - i + 1] = a[i][j];
        }
    }
}

//反射
void reflex(int a[16][16], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            tempMap[i][n - j + 1] = a[i][j];
        }
    }
}

void fun(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            tempMap2[i][j] = tempMap[i][j];
        }
    }
}

int main() {
    int n;
    cin >> n;
    //读取方块map，并转换为整型数组，@为1，-为2
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            char c;
            cin >> c;
            if (c == '@') map[i][j] = 1;
            else map[i][j] = 2;
        }
    }
    //读结果方块transMap
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            char c;
            cin >> c;
            if (c == '@') transMap[i][j] = 1;
            else transMap[i][j] = 2;
        }
    }
    toNinety(map, n);//转90°
    if (compare(tempMap, transMap, n)) {
        cout << "1";
        return 0;
    }
    fun(n);
    toNinety(tempMap2, n);//转两次90°，即180°
    if (compare(tempMap, transMap, n)) {
        cout << "2";
        return 0;
    }
    fun(n);
    toNinety(tempMap2, n);//转三次，270°
    if (compare(tempMap, transMap, n)) {
        cout << "3";
        return 0;
    }
    reflex(map, n);
    if (compare(tempMap, transMap, n)) {
        cout << "4";
        return 0;
    }
    fun(n);
    toNinety(tempMap2, n);//转90°
    if (compare(tempMap, transMap, n)) {
        cout << "5";
        return 0;
    }
    fun(n);
    toNinety(tempMap2, n);//转两次90°，即180°
    if (compare(tempMap, transMap, n)) {
        cout << "5";
        return 0;
    }
    fun(n);
    toNinety(tempMap2, n);//转三次，270°
    if (compare(tempMap, transMap, n)) {
        cout << "5";
        return 0;
    }
    if (compare(map, transMap, n)) {
        cout << "6";
        return 0;
    } else cout << "7";
    return 0;
}