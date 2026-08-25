Given an array and q queriess and the queires contains left , right and odd or even we have to 

1.Return the sum of all the odd indexed from L to r 
else
2.return the sum of all the even indexed from l to r

APPROACH
1.prefix sum of odd indexded and even indexed array (find separately)
2.based on the query if it is even indexed then we have to take the even prefix subarray and calculate vice versa




#include<bits/stdc++.h>
using namespace std;

int suminterval(int arr[] , int n , vector<int>&odd , vector<int>&even)
{
  int ans=0;
  even[0] = arr[0];
  odd[0] = 0;

  for(int i=1; i<n; i++)
  {
    even[i] = even[i - 1];
    odd[i] = odd[i - 1];
    if(i%2==0)
    {
      even[i] +=arr[i];
    }
    else if(i%2!=0)
    {
      odd[i]+=arr[i];
    }
  }

  int query;
  cin >> query;
  while(query--)
  {  ans =0;
    int left , right;
    cin >> left >> right;

    string value;
    cin >> value;

    if(value == "even")
        {
            if(left == 0)
                cout << even[right] << '\n';
            else
                cout << even[right] - even[left - 1] << '\n';
        }
    else if(value == "ODD")
        {
            if(left == 0)
                cout << odd[right] << '\n';
            else
                cout << odd[right] - odd[left - 1] << '\n';
        }
    cout<<ans;
  }
  return 0;
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
  vector<int>odd(n) , even(n);
  suminterval (arr, n , odd  ,even);

  
}



Input:
10
1 2 3 4 5 6 7 8 9 10
Query
3
1 6 even
15 o/p
3 9 odd
0 0/p why zero means we gave it as small letter
3 9 ODD
28o/p
