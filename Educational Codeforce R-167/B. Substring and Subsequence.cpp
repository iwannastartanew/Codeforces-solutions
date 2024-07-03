#include <bits/stdc++.h>

template <typename StringType>
int CalculateMinimumOperations(const StringType& a, const StringType& b) {
    int ans = b.size();
    for (size_t i = 0; i < b.size(); i++) {
        size_t k = i;
        for (size_t j = 0; j < a.size(); j++) {
            if (k < b.size() && a[j] == b[k]) {
                k++;
            }
        }
        ans = std::min(ans, static_cast<int>(i + b.size() - k));
    }
    return ans + a.size();
}

void solve() {
    std::string a, b;
    std::cin >> a >> b;
    std::cout << CalculateMinimumOperations(a, b) << "\n";
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
