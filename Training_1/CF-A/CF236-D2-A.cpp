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
	ll dis=0;
    string s;
    cin>>s;
    ll n=s.length();
    for (int i = 0; i < s.length(); ++i)
    {
    	ll cnt=0;
    	for (int j=0;j<i; ++j)
    	{
    		if(s[j]==s[i])
    			cnt++;
    		/* code */
    	}
    	if(cnt==0)
    		dis++;
    }
    
    if(dis%2!=0)
    	cout<<"IGNORE HIM!"<<endl;
    else
    	cout<<"CHAT WITH HER!"<<endl;





    return 0;    
}

int main() {
    IOS;

    
    solve();
    

}