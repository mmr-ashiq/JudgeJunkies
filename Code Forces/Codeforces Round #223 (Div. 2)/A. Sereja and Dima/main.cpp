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
    int n;
    cin >> n;
    vector<int> v (n);
 
    for ( int i = 0; i < n; i++ ) cin >> v[i];
 
    int a = 0, b = 0, c = 1;
 
    while ( !v.empty() ) {
        if ( c == 1 ) {
            if ( v[0] > v.back() ) {
                a += v[0];
                v.erase( v.begin() );
            }
            else {
                a += v.back();
                v.pop_back();
            }
 
            c = 2;
        }
 
        else {
            if ( v[0] > v.back() ) {
                b += v[0];
                v.erase( v.begin() );
            }
            else {
                b += v.back();
                v.pop_back();
            }
 
            c = 1;
        }
    }
 
    cout << a << " " << b << endl;
    return 0;
}
