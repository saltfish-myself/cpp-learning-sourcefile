#include<bits/stdc++.h>
using namespace std;

int main()
{ int n,x,y;
  double m;cin>>n>>x>>y;
  if(y<=n*x){

  m=n-y*1.0/x;
  cout<<floor(m);
  }
  return 0;

}
