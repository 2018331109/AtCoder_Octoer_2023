#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> ans;
    unordered_map<string, vector<int>> mp;

    for (int i = 0; i < n; i++)
    {
        string ss;
        cin >> ss;
        mp[ss].push_back(i + 1);
    }

    // Process insertions, deletions, and replacements in one loop
    int len = s.length();
    for (int i = 0; i <= len; i++)
    {
        string original = s;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            if (i <= len)
            {
                string sp = original.substr(0, i) + ch + original.substr(i);
                if (mp.count(sp) > 0)
                {
                    ans.insert(ans.end(), mp[sp].begin(), mp[sp].end());
                }
            }

            if (i > 0)
            {
                string sp = original.substr(0, i - 1) + original.substr(i);
                if (mp.count(sp) > 0)
                {
                    ans.insert(ans.end(), mp[sp].begin(), mp[sp].end());
                }
            }

            if (i < len)
            {
                string sp = original;
                sp[i] = ch;
                if (mp.count(sp) > 0)
                {
                    ans.insert(ans.end(), mp[sp].begin(), mp[sp].end());
                }
            }
        }
    }

    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    cout << ans.size() << endl;
    for (int it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int test = 1;
    // cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

