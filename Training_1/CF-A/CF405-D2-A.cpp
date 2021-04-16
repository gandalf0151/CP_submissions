/*

*/
#include <bits/stdc++.h>
using namespace std;


#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

const ll N = 1e4 + 5;

int solve()
{
	ll n;
	cin>>n;
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
	}
	sort(a,a+n);
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
		/* code */
	}
	cout<<endl;



    return 0;    
}

int main() {
    IOS;

    
    solve();
    

}