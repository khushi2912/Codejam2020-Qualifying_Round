#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  int m;
  int n,k;
  for(m=1;m<=t;m++)
  {
    cin>>n>>k;
    if(k==n+1 || k==n*n-1)
    cout<<"Case #"<<m<<": IMPOSSIBLE"<<endl;
    else if(n==2)
    {
      if(k==2 || k==4)
      {
        cout<<"Case #"<<m<<": POSSIBLE"<<endl;
      }
      if(k==2)
      cout<<"1 2\n2 1\n";
      if(k==4)
      cout<<"2 1\n1 2\n";
    }
    else if(n==3)
    {
      if(k==3)
      cout<<"Case #"<<m<<": POSSIBLE\n1 2 3\n3 1 2\n2 3 1\n";
      else if(k==6)
      cout<<"Case #"<<m<<": POSSIBLE\n2 1 3\n3 2 1\n1 3 2\n";
      else if(k==9)
      cout<<"Case #"<<m<<": POSSIBLE\n3 1 2\n2 3 1\n1 2 3\n";
      else
      cout<<"Case #"<<m<<": IMPOSSIBLE\n";
    }
    else if(n==4)
    {
      if(k==4)
      cout<<"Case #"<<m<<": POSSIBLE\n1 2 3 4\n2 1 4 3\n3 4 1 2\n4 3 2 1\n";
      else if(k==6)
      cout<<"Case #"<<m<<": POSSIBLE\n1 2 3 4\n2 1 4 3\n3 4 2 1\n4 3 1 2\n";
      else if(k==7)
      cout<<"Case #"<<m<<": POSSIBLE\n1 2 3 4\n3 1 4 2\n4 3 2 1\n2 4 1 3\n";
      else if(k==8)
      cout<<"Case #"<<m<<": POSSIBLE\n2 3 4 1\n1 2 3 4\n4 1 2 3\n3 4 1 2\n";
      else if(k==9)
      cout<<"Case #"<<m<<": POSSIBLE\n1 4 2 3\n3 1 4 2\n4 2 3 1\n2 3 1 4\n";
      else if(k==10)
      cout<<"Case #"<<m<<": POSSIBLE\n1 4 3 2\n4 1 2 3\n2 3 4 1\n3 2 1 4\n";
      else if(k==11)
      cout<<"Case #"<<m<<": POSSIBLE\n1 4 3 2\n4 2 1 3\n2 3 4 1\n3 1 2 4\n";
      else if(k==12)
      cout<<"Case #"<<m<<": POSSIBLE\n3 4 1 2\n2 3 4 1\n1 2 3 4\n4 1 2 3\n";
      else if(k==13)
      cout<<"Case #"<<m<<": POSSIBLE\n2 4 3 1\n4 3 1 2\n1 2 4 3\n3 1 2 4\n";
      else if(k==14)
      cout<<"Case #"<<m<<": POSSIBLE\n3 4 2 1\n4 3 1 2\n1 2 4 3\n2 1 3 4\n";
      else if(k==16)
      cout<<"Case #"<<m<<": POSSIBLE\n4 1 2 3\n3 4 1 2\n2 3 4 1\n1 2 3 4\n";
    }
    else if(n==5)
    {
      if(k==5)
      cout<<"Case #"<<m<<": POSSIBLE\n1 2 3 4 5\n5 1 2 3 4\n4 5 1 2 3\n3 4 5 1 2\n2 3 4 5 1\n";
      else if(k==7)
      cout<<"Case #"<<m<<": POSSIBLE\n1 4 3 2 5\n2 1 4 5 3\n5 3 2 4 1\n3 2 5 1 4\n4 5 1 3 2\n";
      else if(k==8)
      cout<<"Case #"<<m<<": POSSIBLE\n1 5 3 2 4\n5 3 2 4 1\n4 2 1 3 5\n2 4 5 1 3\n3 1 4 5 2\n";
      else if(k==9)
      cout<<"Case #"<<m<<": POSSIBLE\n3 4 2 1 5\n1 2 3 5 4\n5 3 1 4 2\n4 1 5 2 3\n2 5 4 3 1\n";
      else if(k==10)
      cout<<"Case #"<<m<<": POSSIBLE\n2 3 4 5 1\n1 2 3 4 5\n5 1 2 3 4\n4 5 1 2 3\n3 4 5 1 2\n";
      else if(k==11)
      cout<<"Case #"<<m<<": POSSIBLE\n3 1 5 4 2\n2 3 4 1 5\n1 5 2 3 4\n5 4 1 2 3\n4 2 3 5 1\n";
      else if(k==12)
      cout<<"Case #"<<m<<": POSSIBLE\n5 4 1 3 2\n1 2 5 4 3\n2 1 3 5 4\n4 3 2 1 5\n3 5 4 2 1\n";
      else if(k==13)
      cout<<"Case #"<<m<<": POSSIBLE\n5 1 2 4 3\n2 3 1 5 4\n1 4 3 2 5\n3 5 4 1 2\n4 2 5 3 1\n";
      else if(k==14)
      cout<<"Case #"<<m<<": POSSIBLE\n5 1 2 4 3\n3 4 1 5 2\n1 5 3 2 4\n2 3 4 1 5\n4 2 5 3 1\n";
      else if(k==15)
      cout<<"Case #"<<m<<": POSSIBLE\n5 2 4 1 3\n1 4 5 3 2\n3 5 1 2 4\n2 1 3 4 5\n4 3 2 5 1\n";
      else if(k==16)
      cout<<"Case #"<<m<<": POSSIBLE\n5 2 3 1 4\n1 5 4 3 2\n3 4 1 2 5\n2 1 5 4 3\n4 3 2 5 1\n";
      else if(k==17)
      cout<<"Case #"<<m<<": POSSIBLE\n5 2 4 1 3\n3 5 1 2 4\n4 1 2 3 5\n1 3 5 4 2\n2 4 3 5 1\n";
      else if(k==18)
      cout<<"Case #"<<m<<": POSSIBLE\n5 2 1 3 4\n1 5 4 2 3\n2 4 3 1 5\n3 1 5 4 2\n4 3 2 5 1\n";
      else if(k==19)
      cout<<"Case #"<<m<<": POSSIBLE\n5 1 3 2 4\n4 5 2 1 3\n1 3 4 5 2\n3 2 1 4 5\n2 4 5 3 1\n";
      else if(k==20)
      cout<<"Case #"<<m<<": POSSIBLE\n5 2 1 3 4\n4 5 2 1 3\n3 1 4 2 5\n2 3 5 4 1\n1 4 3 5 2\n";
      else if(k==21)
      cout<<"Case #"<<m<<": POSSIBLE\n5 2 1 3 4\n4 5 3 2 1\n2 3 4 1 5\n3 1 5 4 2\n1 4 2 5 3\n";
      else if(k==22)
      cout<<"Case #"<<m<<": POSSIBLE\n5 4 3 2 1\n4 5 1 3 2\n2 1 4 5 3\n1 3 2 4 5\n3 2 5 1 4\n";
      else if(k==23)
      cout<<"Case #"<<m<<": POSSIBLE\n5 3 4 1 2\n4 5 2 3 1\n1 4 5 2 3\n3 2 1 4 5\n2 1 3 5 4\n";
      else if(k==25)
      cout<<"Case #"<<m<<": POSSIBLE\n5 1 2 3 4\n4 5 1 2 3\n3 4 5 1 2\n2 3 4 5 1\n1 2 3 4 5\n";
    }
  }
}
