#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int n, i, j;

int solve()
{
  int a[100],count=0,k=0;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  start:
  /*if(i==n-1&&a[i]==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }*/
  for(i=k;i<n;i++)
  {
    while(a[i]!=1)
    {
        i++;
    }
    break;
  }
    k=i;
    /*if(i==n-1&&a[i]==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }*/
    for(j=k;j<n;j++)
    {
      j++;
      k++;
      while(a[j]!=1)
      {
        count++;
        j++;
        k++;
        //break;
      }
      k=j;
      count++;
      if(count<6)
      {
        cout<<"NO"<<endl;
        count=0;
        return 0;
      }
      else
      {
          if(k==n-1||k==n-2&&a[k+1]==0)
          {
              count=0;
              cout<<"YES"<<endl;
              return 0;  
          }
          else
          {
            count=0;
            goto start;    
          }
          //return;
      }
      /*{
        cout<<"YES"<<endl;
        count=0;
      }*/    
    }
  //cout<<"YES"<<endl;
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
