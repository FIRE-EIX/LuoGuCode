#include <iostream>

using namespace std;
int ans[21][21][21] = {0};

int main() {
    ios::sync_with_stdio(false);
    int w, x, h, q, cnt = 0;
    cin >> w >> x >> h >> q;
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= x; ++j) {
            for (int k = 1; k <= h; ++k) {
                ans[i][j][k] = 1;
            }
        }
    }
    for (int i = 0; i < q; i++) {
        int x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for (int j = min(x1,x2); j <=max(x1,x2); ++j) {
            for (int k = min(y1,y2); k <=max(y1,y2); ++k) {
                for (int l = min(z1,z2); l <=max(z1,z2); ++l) {
                    ans[j][k][l] = 0;
                }
            }
        }
    }
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= x; ++j) {
            for (int k = 1; k <= h; ++k) {
                if(ans[i][j][k] == 1){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}