Given an integer N, print the corresponding Inverted Half Pyramid pattern for N.

For example if N = 4 then pattern will be like:

****
***
**
*



#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  vector<vector<int>>v(n , vector<int>(n,0));

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n-i; j++)
    {
      cout<<"*"<<" ";
    }
    cout<<endl;
 }
 
}
