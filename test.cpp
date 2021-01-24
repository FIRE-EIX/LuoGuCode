#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <cstring>
using namespace std;

int n;
int mod = 1e9 + 7;
typedef long long LL;

unordered_map<int, int> primes;


int main()
{
    cin >> n;
    int x;
    while(n--)
    {
        scanf("%d",&x);


        for(int i = 2; i <= x/i; i ++)  //  分解素因数， i 只用 循环到 根号x （这是一个质因子的 性质，但是本题数据不严格，不会卡这个点）
            while(x % i == 0)  x /= i, primes[i] ++ ;  //  i 虽然是 一直 ++， 但是 i 如果 不是素数，就不会进入while循环。 （你也可以先把素数预处理出来）

        if(x > 1) primes[x] ++ ;
    }

    LL ans = 1;
    for(auto prime : primes)  // auto 是 c++ 11 的特性， 自动匹配类型。 这种for 循环遍历 也是 。 当然不用这些也是可以的。
    {
        LL a = prime.first, b = prime.second;
        LL p = 1;
        while(b -- ) p = (p*a + 1) % mod;  // 这个公式是别人发明的， 可以手写几个看看， 当然 实现方式有很多。
        ans = ans * p % mod;
    }

    cout << ans;
    return 0;
}