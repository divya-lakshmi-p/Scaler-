Problem Description

Take an integer N as input, print the corresponding pattern for N.

For example if N = 4 then pattern will be like:

1
1 2
1 2 3
1 2 3 4

NOTE: There should be no extra spaces after last integer.

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
      cout<<j+1;
//NOTE: There should be no extra spaces after last integer.

      if(j<i)
        cout<<" ";
    }
    cout<<endl;
 }
 
}
