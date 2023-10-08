#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

const int mod = 1e9 + 7;

bool comp(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.first > b.first;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    vector<pair<int, int>> vp;
    unordered_map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        vp.pb({x, i});
        a[i] = x;
    }
    vector<string> players(n);
    vector<int> scores(n);
    vector<int> v;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> players[i];
        int res = 0;
        for (int j = 0; j < m; j++)
        {
            if (players[i][j] == 'o')
            {
                res += a[j];
            }
        }
        scores[i] = res+i+1;
        mx = max(mx, res+i+1);
    }

    sort(vp.begin(), vp.end(), comp);

    for (int i = 0; i < n; i++)
    {
        int dif = mx - scores[i];
        int it = 0;
        int cnt = 0;
        while (dif > 0)
        {
            if (players[i][vp[it].second] == 'x')
            {
                dif -= vp[it].first;
                cnt++;
            }
            it++;
        }
        v.pb(cnt);
    }

    for (auto it : v)
    {
        cout << it << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    //cin>>test;
    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

