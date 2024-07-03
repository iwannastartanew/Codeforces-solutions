#include <bits/stdc++.h>
 
template <typename T>
int ProcessVectors(const std::vector<T>& a, const std::vector<T>& b) {
    int A = 0, B = 0, C = 0;
    int n = a.size();
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            A += a[i];
            } else if (a[i] < b[i]) {
              B += b[i];
                 } else if (a[i] == 1) {
                    C++;
                      } else if (a[i] == -1) {
                         C++;
                             A--;
                                 B--;
        }
    }
    return std::min({A + C, B + C, (A + B + C) >> 1});
}
 
void solve() {
    int n;
    std::cin >> n;
 
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }
 
    std::cout << ProcessVectors(a, b) << "\n";
}
 
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
 
    int t;
    std::cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}
