Given an array count no of elements that have atleast one element greater than themselves .



#include<bits/stdc++.h>
using namespace std;


int main()
{

  int n;
  cin >> n;

  int arr[n];

  int Maxi = INT_MIN , count=0;
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];

    Maxi = max(Maxi ,arr[i]);

  }

  for(int i=0; i<n; i++)
  {
    if(Maxi==arr[i])
    {
      count++;
    }
  }

  cout<<n-count;
  
}
Input
7
3 -2 6 8 4 8 5 
Output:
5
