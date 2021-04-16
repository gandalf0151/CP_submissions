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
	int a[5][5],res=0;
	for (int i = 0; i < 5; ++i)
	{
		for(int j=0;j<5;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==1)
				res=abs(2-i)+abs(2-j);
		}
		/* code */
	}
	cout<<res<<endl;




    return 0;    
}

int main() {
    IOS;

    
    solve();
    

}