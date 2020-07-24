#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
 
int i, j;
 
int solve()
{
  int n,p[1000],c[1000],count=0;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>p[i];
    cin>>c[i];
  }
  for(i=1;i<n;i++)
  {
    if((p[i]>=p[i-1]&&c[i]>=c[i-1]&&p[i]>=c[i])&&(p[i]-p[i-1])>=(c[i]-c[i-1]))
    {
      count++;
    }
    else
    {
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}
 
int sove1()
{
  int n,p[1000],c[1000],count=0;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>p[i];
    cin>>c[i];
  }
  for(i=1;i<n;i++)
  {
    if((p[i]>=p[i-1]&&c[i]>=c[i-1]&&p[i]>=c[i])&&(p[i]-p[i-1])>=(c[i]-c[i-1]))
    {
      count++;
    }
    else
    {
      cout<<"NO";
      return 0;
    }
  }
  cout<<"YES";
  return 0;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t>1) {
        //cout << "Case #" << m << ": ";
        solve();
        t--;
        //++m;
    }
    if(t==1)
    {
        sove1();
    }
}
