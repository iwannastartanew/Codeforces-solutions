#include <bits/stdc++.h>

template <typename T>
void ProcessArrays(const std::vector<T>& a, const std::vector<T>& b, int m) {
    T s = *std::max_element(a.begin(), a.end());
    std::vector<T> f(s + 1, 2 * s + 1);

    for (size_t i = 0; i < a.size(); i++) {
        f[a[i]] = std::min(f[a[i]], a[i] - b[i]);
    }

    for (T i = 1; i <= s; i++) {
        f[i] = std::min(f[i], f[i - 1]);
    }

    std::vector<int> dp(s + 1);
    for (T i = 1; i <= s; i++) {
        if (f[i] <= i) {
            dp[i] = dp[i - f[i]] + 1;
        }
    }

    long long ans = 0;
    while (m--) {
        T c;
        std::cin >> c;
        if (c > s) {
            int t = (c - s + f[s] - 1) / f[s];
            c -= t * f[s];
            ans += t;
        }
        ans += dp[c];
    }

    std::cout << 2 * ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    ProcessArrays(a, b, m);

    return 0;
}


/*
using pointers/namespace std;
#include <bits/stdc++.h>
using namespace std;
 
template <typename T> 
void ProcessArrays(const T* a, const T* b, int n, int m) {
    T s = *max_element(a, a + n);
    vector<T> f(s + 1, 2 * s + 1);
 
    for (int i = 0; i < n; i++) {
        f[a[i]] = min(f[a[i]], a[i] - b[i]);
    }
    for (T i = 1; i <= s; i++) {
        f[i] = min(f[i], f[i - 1]);
    }
    vector<int> dp(s + 1);
    for (T i = 1; i <= s; i++) {
        if (f[i] <= i) {
            dp[i] = dp[i - f[i]] + 1;
        }
    }
    long long ans = 0;
    while (m--) {
        T c;
        cin >> c;
        if (c > s) {
            int t = (c - s + f[s] - 1) / f[s];
            c -= t * f[s];
            ans += t;
        }
        ans += dp[c];
    }
 
    cout << 2 * ans << "\n";
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, m;
    cin >> n >> m;
 
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    ProcessArrays(a.data(), b.data(), n, m);
 
    return 0;
}

*/
