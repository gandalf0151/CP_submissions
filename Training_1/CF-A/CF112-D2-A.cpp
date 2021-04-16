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
	string s1,s2;
	cin>>s1>>s2;
	int l=s1.length();
	transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
	transform(s2.begin(),s2.end(),s2.begin(), ::tolower);
	for (int i = 0; i < l; ++i)
	{
		if(s1[i]>s2[i]){
			cout<<1<<endl;
			return 0;
		}
		if(s1[i]<s2[i]){
			cout<<-1<<endl;
			return 0;
		}
		/* code */
	}
	cout<<0<<endl;

    return 0;    
}

int main() {
    IOS;

    
    solve();
    

}