// https://codeforces.com/contest/1985/problem/H1

// https://www.youtube.com/watch?v=H3UnizqCWLA

#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define sp " " 

// Types
#define ui unsigned int
#define us unsigned short
#define ull unsigned long long
#define ll long long
#define ld long double
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vii vector<pair<int,int>>
#define pii pair<int,int>

// Utils
#define len(x) int((x).size())
#define pb push_back
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()

// Constants
const ll MOD = 1e9+7;
int n, m;
unordered_map<int, int> mp;
vector<vector<char>> ch;
vvi arr;

void bfs(int i, int j, int cnt) {
    int size = 0;
    int dR[4] = {-1, 1, 0, 0};
    int dC[4] = {0, 0, -1, 1};

    queue<pair<int, int>> q;
    q.push({i, j});
    arr[i][j] = cnt;
    while (!q.empty()) {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        for (int x = 0; x < 4; x++) {
            int nrow = row + dR[x];
            int ncol = col + dC[x];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && arr[nrow][ncol] == 0 && ch[nrow][ncol] == '#') {
                q.push({nrow, ncol});
                arr[nrow][ncol] = cnt;
                size++;
            }
        }
    }
    mp[cnt] = size + 1; // Include the initial cell
}

/*-----------------------------------------------*/

void solve() {
    cin >> n >> m;
    ch.assign(n, vector<char>(m));
    arr.assign(n, vi(m, 0));
    mp.clear();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> ch[i][j];
        }
    }

    int cnt = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ch[i][j] == '#' && arr[i][j] == 0) {
                bfs(i, j, cnt);
                cnt++;
            }
        }
    }

    int maxsize = 0;
    // for each row
    for (int i = 0; i < n; i++) {
        set<int> st;
        int size = 0;
        for (int j = 0; j < m; j++) {
            if (i - 1 >= 0 && arr[i - 1][j] != 0) st.insert(arr[i - 1][j]);
            if (i + 1 < n && arr[i + 1][j] != 0) st.insert(arr[i + 1][j]);
            if (arr[i][j] != 0) st.insert(arr[i][j]);
            else size++;
        }

        for (auto it : st) {
            size += mp[it];
        }

        maxsize = max(maxsize, size);
    }
    
    // for each column
    for (int j = 0; j < m; j++) {
        unordered_set<int> st;
        int size = 0;
        for (int i = 0; i < n; i++) {
            if (j - 1 >= 0 && arr[i][j - 1] != 0) st.insert(arr[i][j - 1]);
            if (j + 1 < m && arr[i][j + 1] != 0) st.insert(arr[i][j + 1]);
            
            if (arr[i][j] != 0) st.insert(arr[i][j]);
            else size++;
        }

        for (auto it : st) {
            size += mp[it];
        }
        maxsize = max(maxsize, size);
    }

    cout << maxsize << nl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
