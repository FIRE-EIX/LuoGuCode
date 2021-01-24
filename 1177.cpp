//
// Created by EIX on 2020/12/3.
//

#include<iostream>

#include <stdio.h>
using namespace std;

int n, a[1000001];
void qsort(int left, int right) {
    int i, j, t, temp;
    if(left > right)
        return;
    temp = a[left]; //temp中存的就是基准数
    i = left;
    j = right;
    while(i != j) { //顺序很重要，要先从右边开始找
        while(a[j] >= temp && i < j)
            j--;
        while(a[i] <= temp && i < j)//再找右边的
            i++;
        if(i < j)//交换两个数在数组中的位置
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    //最终将基准数归位
    a[left] = a[i];
    a[i] = temp;
    qsort(left, i-1);//继续处理左边的，这里是一个递归的过程
    qsort(i+1, right);//继续处理右边的 ，这里是一个递归的过程
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    qsort(1, n);
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    return 0;
}