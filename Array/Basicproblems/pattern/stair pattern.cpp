Take an integer N as input, print the corresponding stair pattern for N.

For example if N = 4 then stair pattern will be like:

*
**
***
****

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  vector<vector<int>>v(n , vector<int>(n,0));

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<=i; j++)
    {
      cout<<"*"<<" ";
    }
    cout<<endl;
 }
 
}
