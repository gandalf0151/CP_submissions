/*

*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N = 1e4 + 5;

bool isprime(int n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 

int solve()
{
    int m,n;
    cin>>m>>n;
    for (int i = m; i < n+1; ++i)
    {
        if(isprime(i))
            cout<<i<<endl;
        /* code */
    }
    cout<<endl;




    return 0;    
}

int32_t main() {
    IOS;

    int t;
    cin >> t;
    while(t--) {
    
        solve();
    
    }
}