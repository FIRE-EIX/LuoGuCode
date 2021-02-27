//
// Created by XIE on 2021/2/26.
//

#include <iostream>
#include <string>

using namespace std;

struct student {
    string name;
    int age;
    int score;
} s[1006];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> s[i].name >> s[i].age >> t;
        s[i].age += 1;
        s[i].score = t + t * 0.2;
        if (s[i].score > 600) s[i].score = 600;
    }
    for (int i = 0; i < n; i++) {
        cout << s[i].name << " " << s[i].age << " " << s[i].score << endl;
    }
    return 0;
}