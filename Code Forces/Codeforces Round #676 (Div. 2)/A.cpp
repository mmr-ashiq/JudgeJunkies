// problem: https://codeforces.com/contest/1421/problem/A

#include<bits/stdc++.h>
using namespace std;

#define int             		long long

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve(){
	int a,b;
	cin>>a>>b;
	int res = a ^ b;
	cout<<res<<endl;
}

int32_t main()
{
	c_p_c();
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
