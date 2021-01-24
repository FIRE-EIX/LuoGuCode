//
// Created by EIX on 2020/11/29.
//

#include<iostream>
#include<cstdio>
#include <algorithm>

using namespace std;

struct node{
    int a,b;
}no[200006];

bool cmp(node x,node y)
{
    return x.a<x.b;
}

int main() {
    int n;
    cin>>n;
    while(n--)
    {
        int t,flag=0,temp=0;
        long long ans=0;
        cin>>t;
        for(int i=0;i<t;i++)
        {
            scanf("%d",&no[i].a);
        }
        for(int i=0;i<t;i++)
        {
            scanf("%d",&no[i].b);
        }
        sort(no,no+t,cmp);
        for(int i=0;i<t;i++)
        {
            if(no[i].a<no[i].b&&flag==0)
            {
                temp=no[i].a;
                continue;
            }
            else if(no[i].a>no[i].b&&flag==0)
            {
                ans=no[i].b;
                flag=1;
            }
            else if(no[i].a<ans&&flag==1)
            {
                temp=no[i].a;
                continue;
            }
            else
            {
                ans+=no[i].b;
            }
        }
        if(ans>temp) cout<<ans<<endl;
        else cout<<temp<<endl;
    }
    return 0;
}