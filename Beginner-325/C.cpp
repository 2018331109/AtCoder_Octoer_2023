#include<bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define neg cout<<-1<<endl;
#define pb push_back
int mod = 1e9+7;


const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool isValid(int x, int y, int H, int W)
{
    return (x >= 0 && x < H && y >= 0 && y < W);
}

int dfs(int x, int y, vector<string>& grid, vector<vector<bool>>& visited)
{
    visited[x][y] = true;
    int sensor_count = 1;

    for (int i = 0; i < 8; i++)
    {
        int new_x = x + dx[i];
        int new_y = y + dy[i];

        if (isValid(new_x, new_y, grid.size(), grid[0].size()) && grid[new_x][new_y] == '#' && !visited[new_x][new_y])
        {
            sensor_count += dfs(new_x, new_y, grid, visited);
        }
    }

    return sensor_count;
}

int countSensors(vector<string>& grid)
{
    int H = grid.size();
    int W = grid[0].size();
    vector<vector<bool>> visited(H, vector<bool>(W, false));
    int sensor_count = 0;

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (grid[i][j] == '#' && !visited[i][j])
            {
                sensor_count++;
                dfs(i, j, grid, visited);
            }
        }
    }

    return sensor_count;
}

void solve()
{
    int H, W;
    cin >> H >> W;

    vector<string> grid(H);
    for (int i = 0; i < H; i++)
    {
        cin >> grid[i];
    }

    int result = countSensors(grid);
    cout << result << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    // cin >> test;

    for(int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

