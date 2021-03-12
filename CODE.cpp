#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
#define watch(x) cout << (#x) << " is " << (x) << endl
#define MOD 1000000007

void dfs(int s, vector<int> adj[],bool vis[]){

	cout << s <<" ";
	vis[s] = 1;
	for(auto x: adj[s]){
		if(!vis[x])
			dfs(x,adj,vis);
	}
}


void solve(int T)
{
	int n;
	cin >> n;
	vector<int> adj[n+1];

	for(int  i = 0 ; i < n ;i++)
	{	int x,y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	bool vis[n+1];
	for(int  i = 0 ; i <=n ;i++)vis[i] = false;

	dfs(1ll,adj,vis);
	cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("error.out", "w", stderr);
    freopen("outputf.out", "w", stdout);
#endif

    int T = 1;
    //cin >> T;
    for (int t=1;t<=T; t++) {
        solve(t);
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
