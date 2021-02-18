//
// Created by XIE on 2021/2/18.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long ans = 0;
    int a, i = 0;
    while (cin >> a) {
        ans += a;
        i++;
    }
    ans *= pow(2, i - 1);
    cout << ans << endl;
    return 0;
}