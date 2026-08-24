Print a Pattern According to The Given Value of A.

Example: For A = 3 pattern looks like:

1 0 0

1 2 0

1 2 3



Problem Constraints

1 <= A <= 1000


Input Format

First and only argument is an integer denoting A.



Output Format

Return a two-dimensional array where each row in the returned array represents a row in the pattern.



Example Input

Input 1:

 A = 3
Input 2:

 A = 4


Example Output

Output :1

 [ 
   [1, 0, 0]
   [1, 2, 0]
   [1, 2, 3]
 ]
Output 2:

 [ 
   [1, 0, 0, 0]
   [1, 2, 0, 0]
   [1, 2, 3, 0]
   [1, 2, 3, 4]
 ]



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
        v[i][j] = j+1;
    }
 }

 for(int i=0; i<n; i++)
 {
  for(int j=0; j<n; j++)
  {
    cout<<v[i][j]<<" ";
  }
  cout<<endl;
 }
 
}
