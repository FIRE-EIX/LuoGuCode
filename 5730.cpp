//
// Created by EIX on 2020/12/1.
//

#include<iostream>
#include<string>

using namespace std;
char biao[10][5][3] = {
        {//0
                'X', 'X', 'X',
                'X', '.', 'X',
                'X', '.', 'X',
                'X', '.', 'X',
                'X', 'X', 'X',
        },
        {//1
                '.', '.', 'X',
                '.', '.', 'X',
                '.', '.', 'X',
                '.', '.', 'X',
                '.', '.', 'X',
        },
        {//2
                'X', 'X', 'X',
                '.', '.', 'X',
                'X', 'X', 'X',
                'X', '.', '.',
                'X', 'X', 'X',
        },
        {//3
                'X', 'X', 'X',
                '.', '.', 'X',
                'X', 'X', 'X',
                '.', '.', 'X',
                'X', 'X', 'X',
        },
        {//4
                'X', '.', 'X',
                'X', '.', 'X',
                'X', 'X', 'X',
                '.', '.', 'X',
                '.', '.', 'X',
        },
        {//5
                'X', 'X', 'X',
                'X', '.', '.',
                'X', 'X', 'X',
                '.', '.', 'X',
                'X', 'X', 'X',
        },
        {//6
                'X', 'X', 'X',
                'X', '.', '.',
                'X', 'X', 'X',
                'X', '.', 'X',
                'X', 'X', 'X',
        },
        {//7
                'X', 'X', 'X',
                '.', '.', 'X',
                '.', '.', 'X',
                '.', '.', 'X',
                '.', '.', 'X',
        },
        {//8
                'X', 'X', 'X',
                'X', '.', 'X',
                'X', 'X', 'X',
                'X', '.', 'X',
                'X', 'X', 'X',
        },
        {//9
                'X', 'X', 'X',
                'X', '.', 'X',
                'X', 'X', 'X',
                '.', '.', 'X',
                'X', 'X', 'X',
        }
};

int main() {
    ios::sync_with_stdio(false);
    int n;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < 3; k++) {
                cout << biao[s[j] - '0'][i][k];
                if (j == n - 1 && k == 2) cout << endl;
                else if (k == 2) cout << ".";
            }
        }
    }
    return 0;
}