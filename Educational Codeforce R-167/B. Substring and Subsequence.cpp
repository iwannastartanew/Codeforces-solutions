#include <bits/stdc++.h>

template <typename CharT>
void solve() {
    std::basic_string<CharT> a, b;
    std::basic_istream<CharT>& input = std::basic_istream<CharT>::std::cin;
    input >> a >> b;

    int ans = b.size();
    for (int i = 0; i < b.size(); i++) {
        int k = i;
        for (int j = 0; j < a.size(); j++) {
            if (k < b.size() && a[j] == b[k]) {
                k++;
            }
        }
        ans = std::min(ans, i + int(b.size()) - k);
    }
    std::basic_ostream<CharT>& output = std::basic_ostream<CharT>::std::cout;
    output << ans + a.size() << "\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve<char>();
    }
    return 0;
}
