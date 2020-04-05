#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  int k;
  cin>>t;
  int i;
  string s;
  string b="";
  int j;
  char open;
  int p;
  int num;
  for(k=1;k<=t;k++)
  {
    b="";
    cin>>s;
    p=0;
    for(i=0;i<s.length();i++)
    {
      if(s[i]==')')
      p--;
      if(p==-1)
      {
        b=b+'(';
        b=b+s[i];
        p++;
      }
      else if(s[i]=='(')
      p++;
      else
      {
        num=s[i]-'0';
        while(p<num)
        {
          b=b+'(';
          p++;
        }
        while(p>num)
        {
          b=b+')';
          p--;
        }
        if(p==num)
        b=b+s[i];
      }
    }
    while(p>0)
    {
      b=b+')';
      p--;
    }
    cout<<"Case #"<<k<<": "<<b<<endl;
  }
}
