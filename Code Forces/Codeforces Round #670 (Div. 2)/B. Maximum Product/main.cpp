#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main()
{
	c_p_c();
	int t; 
	cin>>t;
    while(t--){
        int n;
        cin>>n;
        std::vector<int> a(n); 
        for(int p = 0; p < n; p++){
        	cin>>a[p];
        }
        sort(a.begin(), a.end());
        int prodA = a[n - 5] * a[n - 4] * a[n - 3] * a[n - 2] * a[n - 1];
        int prodB = a[0] * a[1] * a[n - 3] * a[n - 2] * a[n - 1];
        int prodC = a[0] * a[1] * a[2] * a[3] * a[n - 1];
        int res = (prodA > prodB) ? prodA : prodB;
        res = (res > prodC) ? res : prodC;
        cout<<res<<endl;
    }
 
    return 0;
}
