#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define watch(x) cout << (#x) << " is " << (x) << endl
#define MOD 1000000007

int matrix[6][6];

int getRem(int x,int y,int n,int m){
  int count = 0;
  for(int i = 0 ; i < n; i++){
    for(int j = 0; j < m ; j++){
      if(x&(1<<i) || y&(1<<j))
        continue;
      count+=matrix[i][j];
    }
  }
  return count;
}


void solve(int T)
{

  int n,m,k;
  cin>> n >> m >> k;

  for(int i=0;i < n; i++){
    string s; cin >> s;
    for(int j = 0 ; j < m ; j++)
      matrix[i][j] = (s[j]=='.'?0:1);
  }
  int ans = 0;
  for(int i=0; i < (1<<n); i++){
    for(int j=0; j <  (1<<m); j++){
      int rem = getRem(i,j,n,m);
      if(rem == k)
        ans++;
    }
  }

  cout << ans << endl;
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
