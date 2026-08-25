Given an array A of size N, find the subarray of size B with the least average.



Problem Constraints

1 <= B <= N <= 105
-105 <= A[i] <= 105


Input Format

First argument contains an array A of integers of size N.
Second argument contains integer B.


Output Format

Return the index of the first element of the subarray of size B that has least average.
Array indexing starts from 0.


Example Input

Input 1:
A = [3, 7, 90, 20, 10, 50, 40]
B = 3
Input 2:

A = [3, 7, 5, 20, -10, 0, 12]
B = 2






Example Output

Output 1:
3
Output 2:

4






Example Explanation

Explanation 1:
Subarray between indexes 3 and 5
The subarray {20, 10, 50} has the least average 
among all subarrays of size 3.
Explanation 2:

 Subarray between [4, 5] has minimum average







#include<bits/stdc++.h>
using namespace std;
void leastsum(int arr[] , int n)
{
  vector<int>prefix(n);
  prefix[0] =arr[0];
  for(int i=1; i<n; i++)
  {
    prefix[i] = prefix[i-1]+arr[i];
  }

  int k;
  cin >> k;
  int mini = INT_MAX , ans =0;

  for(int i=0 ; i<n-k+1; i++)
  {   

    if(i == 0)
    {
        if(prefix[k-1] < mini)
        {
            mini = prefix[k-1];
            ans = i;
        }
    }
    else if((prefix[k+i-1]-prefix[i-1])<mini)
    {
      mini = prefix[k+i-1]-prefix[i-1];
      ans = i;
    }
}

  cout<<ans<<endl;
}

int main()
{
  int n;
  cin >> n;

  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin >> arr[i];
  }

  leastsum (arr , n);
}
