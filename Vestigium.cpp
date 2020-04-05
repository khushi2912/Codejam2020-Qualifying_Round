#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  int n;
  int i;
  int j;
  int k;
  int rows;
  int cols;
  int trace=0;
  int a[100][100];
  cin>>t;
  for(k=1;k<=t;k++)
  {
    cin>>n;
    rows=0;
    cols=0;
    trace=0;
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        cin>>a[i][j];
        if(i==j)
        trace=trace+a[i][j];
      }
    }

    int b[n][n];
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      b[i][j]=a[j][i];
    }

    for(i=0;i<n;i++)
    {
      sort(a[i],a[i]+n);
      for(j=0;j<n-1;j++)
      {
        if(a[i][j]==a[i][j+1])
        {
          rows++;
          break;
        }
      }
    }

    for(i=0;i<n;i++)
    {
      sort(b[i],b[i]+n);
      for(j=0;j<n-1;j++)
      {
        if(b[i][j]==b[i][j+1])
        {
          cols++;
          break;
        }
      }
    }
    cout<<"Case #"<<k<<": "<<trace<<" "<<rows<<" "<<cols<<endl;
   }
}
