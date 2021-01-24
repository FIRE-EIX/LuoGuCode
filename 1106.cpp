//
// Created by EIX on 2020/12/5.
//https://www.luogu.com.cn/problem/P1106
//键盘输入一个高精度的正整数 N（不超过 250 位），
// 去掉其中任意 k 个数字后剩下的数字按原左右次序将组成一个新的非负整数。
// 编程对给定的 N 和 k，寻找一种方案使得剩下的数字组成的新数最小。

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string n,n1,min="A";
    string ans[256];
    int k,t=0;
    cin>>n>>k;
    n1=n;
    string::iterator it;
    for(int i=0;i<n.size()-k-1;i++)
    {
        for(it=n1.begin()+i;t<k-1;it++){
            if(*it=='0'){
                n1.erase(it);
            }else{
                n1.erase(it);
                t++;
            }
        }
        cout<<n1<<endl;
        ans[i]=n1;
        n1=n;
        t=0;
    }
    for(int i =0;i<n.size()-k;i++){
        if(min>ans[i]){
            min=ans[i];
        }
    }
    cout<<min;
    return 0;
}
