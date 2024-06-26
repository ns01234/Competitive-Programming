#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define ld long double
#define pi pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pi>
#define pb push_back
#define ar array
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

const ll MOD = 1e9+7;
const ll INF = 1e18;
const ll MAX = 2e5+1;
const ld EPS = 1e-9; 

void solve() {
    int n; cin >> n;
    map<int, priority_queue<int, vi, greater<>>> mp;
    vi ans, v;
    int nn = n;
    while (nn--) {
        int x; cin >> x;
        v.pb(x);
        mp[x/4].push(x);
    }
    for (int i = 0; i < n; ++i) {
        int m = v[i] / 4;
        ans.pb(mp[m].top());
        mp[m].pop();
    }
    for (auto x : ans) cout << x << ' ';
    cout << '\n';
}

signed main () {

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t = 1;
	cin >> t;
	while (t--) solve();

	return 0;
}
