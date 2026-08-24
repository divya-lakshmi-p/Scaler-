Take an integer N, print the corresponding Full Pyramid pattern for N.

For example if N = 5 then pattern will be like:

    * 
   * * 
  * * * 
 * * * * 
* * * * * 






#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n-i-1; j++)
    {
      cout<<" ";
    }

    for(int j=0; j<=i;j++)
    {
        cout<<"* ";
    }
    cout<<endl;
 }
 
}
