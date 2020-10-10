#include<bits/stdc++.h>
using namespace std;
 
#define ff              		first
#define ss              		second
#define yes 					      cout << "yes" << endl
#define no 						      cout << "no" << endl
#define YES 					      cout << "YES" << endl
#define NO 						      cout << "NO" << endl
#define int             		long long
#define lli 					      long long int
#define pb              		push_back
#define mp              		make_pair
#define pii             		pair<int,int>
#define vi              		vector<int>
#define mii             		map<int,int>
#define pqb             		priority_queue<int>
#define pqs             		priority_queue<int,vi,greater<int> >
#define setbits(x)      		__builtin_popcountll(x)
#define zrobits(x)      		__builtin_ctzll(x)
#define mod             		1000000007
#define inf             		1e18
#define ps(x,y)         		fixed<<setprecision(y)<<x
#define point(x) 				fixed<<setprecision(x)
#define aInput(ar, n) 			for(int i=0; i<n; i++)cin>>ar[i];
#define aprint(ar, n) 			for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
#define vInput(v, n) 			for(int i=0; i<n; i++){lli x;cin>>x;v.push_back(x);}
#define vprint(vec) 			for(int i=0; i<vec.size(); i++){cout << vec[i] << " ";} cout<<endl
#define input2D(ar, row, col) 	for(int i=0; i<row; i++){for(int j=0; j<col; j++){cin >> a[i][j];}}
#define print2D(ar, row, col) 	for(int i=0; i<row; i++){for(int j=0; j<col; j++){cout << ar[i][j] << " ";}cout<<"\n";}
 
#define execution_time nl;int z=30;while(z--){cout<<'-';}nl;print(point(16)<<"**Time -> "<<(double)(clock()-tStart)/CLOCKS_PER_SEC<<"fs");
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
 
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
 
//these given fuctions was created for STL
struct Interval{
	int st;
	int et;
};
 
bool compare(Interval i1,Interval i2){
 
	return i1.st < i2.st;
}
 
int32_t main()
{
	c_p_c();
	int t;
	cin>>t;
	while(t--){
		
	}
	
	return 0;
}
