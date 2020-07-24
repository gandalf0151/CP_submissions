https://www.codechef.com/APRIL20B/problems/COVIDLQ

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int n, i, j;

void solve()
{
  int a[100],count=0,k=0;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  start:
  for(i=k;i<n;i++)
  {
    while(a[i]!=1)
    {
        i++;
    }
    break;
  }
    k=i;
    for(j=k;j<n;j++)
    {
      j++;
      while(a[j]!=1)
      {
        count++;
        j++;
        //break;
      }
      k=j;
      count++;
      if(count<6)
      {
        cout<<"NO"<<endl;
        count=0;
        return;
      }
      else
      {
          count=0;
          goto start;  
      }
      /*{
        cout<<"YES"<<endl;
        count=0;
      }*/    
    }
  cout<<"YES"<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        //cout << "Case #" << m << ": ";
        solve();
        //++m;
    }
}
