#include <bits/stdc++.h>
using namespace std;

long long points(long long k, long long n, long long l, long long t) {
    long long total_tasks = (n + 6) / 7;   // ceil(n/7)
    long long tasks_done = min(total_tasks, 2 * k);
    return k * l + tasks_done * t;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        long long n, P, l, t;
        cin >> n >> P >> l >> t;

        long long lo = 0, hi = n, ans = n;

        while (lo <= hi) {
            long long mid = (lo + hi) / 2;
            if (points(mid, n, l, t) >= P) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        cout << n - ans << '\n';
    }
}