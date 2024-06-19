#include <iostream>
#include <cstdio>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

const int N = 1000010;
typedef long long ll;
typedef pair<ll,ll> pii;

inline ll& st(pii& p) { return p.first; }
inline ll& ed(pii& p) { return p.second; }

template<typename T1, typename T2>
inline pii mkp(T1 a, T2 b) { return make_pair(a, b); }

template<typename T>
inline void pb(vector<T>& v, const T& item) { v.push_back(item); }

inline ll read() {
    ll x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = (x << 1) + (x << 3) + (ch ^ 48);
        ch = getchar();
    }
    return x * f;
}

ll T = 1, n, m, q, k;
ll s[N];
char c[N];

void solve() {
    scanf("%lld %lld", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%lld", &s[i]);
    
    ll ans = (m + 1) * (m + 2) / 2;
    ll cnta = 0, cntb = 0;
    
    for (int i = 1; i <= n; i++) {
        ans -= (s[i] >> 1) + 1;
        ans -= (m - s[i] + 1);
        if (s[i] & 1) cnta++;
        else cntb++;
    }
    
    ans += cnta * (cnta + 1) / 2;
    ans += cntb * (cntb + 1) / 2;
    
    printf("%lld\n", ans);
}

int main()
{
    scanf("%lld", &T);
    while (T--) solve();
    return 0;
}
