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
	ll t,a,b,c,solve=0;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if(a+b+c>=2)
			solve++;
	}
	cout<<solve<<endl;



    return 0;    
}

int main() {
    IOS;

    
    solve();
    

}
