#include<bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin>>T;
  string s;
  cin>>s;
  int j;
  int i;
  int k;
  for(k=1;k<=T;k++)
  {
    char c;
    string t="";
    for(j=0;j<10;j++)
    t=t+"0";
    for(i=1;i<=10;i++)
    {
      cout<<i<<endl;
      cout.flush();
      cin>>c;
      t[i-1]=c;
    }
    cout<<t<<endl;
    cout.flush();
    char x;
    cin>>x;
    if(x=='Y')
    continue;
    else
    return 0;
  }
return 0;
}
