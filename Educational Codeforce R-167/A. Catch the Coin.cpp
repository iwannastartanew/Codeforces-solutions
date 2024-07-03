#include <bits/stdc++.h>

void dp() {
    int x, y;
    std::cin >> x >> y;
    
    std::cout << (y >= -1 ? "YES\n" : "NO\n");
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        dp();
    }
    
    return 0;
}
