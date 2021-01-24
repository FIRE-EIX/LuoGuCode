//
// Created by EIX on 2020/12/2.
//https://www.luogu.com.cn/problem/P1271

#include <iostream>
#include <algorithm>

using namespace std;

int a[2000006]={0};

int main() {
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    for(int i=0;i<m-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[m-1];
    return 0;
}