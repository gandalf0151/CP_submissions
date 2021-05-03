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
	ll u=0;
	ll l=0;
	string s;
	cin>>s;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]-0<96)
			u++;
		else
			l++;
		/* code */
	}
	if(l>=u)
		transform(s.begin(),s.end(),s.begin(),::tolower);
	else
		transform(s.begin(),s.end(),s.begin(),::toupper);
	cout<<s<<endl;


    return 0;    
}

int main() {
    IOS;

    
    solve();
    

}
