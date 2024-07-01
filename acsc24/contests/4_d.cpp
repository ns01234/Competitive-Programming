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
const ll MAX = 20;

int par[MAX][31];

void solve() {
    int N, Q;
    cin >> N >> Q;
    vi v(N);
    for (auto& x : v) cin >> x;
    for (int i = 1; i <= N; ++i) {
        par[i][0] = v[i-1];
    }
    for (int i = 1; i < 31; ++i) {
        for (int j = 1; j <= N; ++j) {
            par[j][i] = par[par[j][i-1]][i-1];
        }
    } 
    
    while (Q--) {
        int x, k;
        cin >> x >> k;
        for (int i = 0; i < 31; ++i) {
            if ((1 << i) & k) x = par[x][i];
        }
        cout << x << '\n';
    }
}

signed main () {

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t = 1;
	// cin >> t;
	while (t--) solve();

	return 0;
}
