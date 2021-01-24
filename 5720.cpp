//
// Created by EIX on 2020/11/30.
//https://www.luogu.com.cn/problem/P5720

#include <iostream>

using namespace std;

int main() {
    int a,i;
    cin>>a;
    for(i=0;;i++)
    {
        if(a==1) break;
        a/=2;
    }
    cout<<i+1;
    return 0;
}