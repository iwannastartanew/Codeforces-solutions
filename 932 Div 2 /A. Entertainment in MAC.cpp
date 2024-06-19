#include <iostream>
#include <string>
#include <algorithm>
using i64 = long long;

void solve() {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;
    // concatenate s with its reverse and get the lexicographically smallest string
    std::string reversed_s(s.rbegin(), s.rend());
    s = std::min(s, reversed_s + s);
    std::cout << s << "\n";
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
