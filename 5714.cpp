//
// Created by EIX on 2020/11/29.
//https://www.luogu.com.cn/problem/P5714

# include <iostream>

using namespace std;

int main() {
    double m, h, bmi;
    cin >> m >> h;
    bmi = m / (h * h);
    if (bmi < 18.5) cout << "Underweight" << endl;
    if (bmi >= 18.5 && bmi < 24)
        cout << "Normal" << endl;
    if (bmi >= 24) {
        cout << bmi << endl;
        cout << "Overweight" << endl;
    }
    return 0;
}
