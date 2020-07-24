/*

*/
#include <bits/stdc++.h>
using namespace std;


#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N = 1e4 + 5;

int solve()
{
    int s=0;
    for (int i = 1; i < 1000; ++i)
    {
        if(i%3==0||i%5==0)
            s+=i;
        /*if((i%3==0&&i%5!=0)||(i%3!=0&&i%5==0))
            s+=i;
        /* code */
    }
    cout<<s<<endl;




    return 0;    
}

int32_t main() {
    IOS;

    
    solve();
    

}