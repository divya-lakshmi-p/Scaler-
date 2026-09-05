Print the sum of all the subarrays of the given query 


Prefix sum 

#include<bits/stdc++.h>
using namespace std;

void subarry(int arr[] , int n)
{
    vector<int>pref(n);

    for(int i=0; i<n; i++)
    {
      (i==0)?pref[i]=arr[i]:pref[i]= pref[i-1]+arr[i];
    }

      int q;
      cin >> q;
      int sum =0;
    while(q--)
    {
      int s ,e;
      cin >> s>> e;
      if(s == 0)
      sum = pref[e];
      else
      sum = pref[e]- pref[s-1];

      cout<<sum <<" ";
    }
    cout<<endl;
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

  subarry(arr , n);
}

#include<bits/stdc++.h>
using namespace std;

void querysubarray(int arr[] ,int n)
{
  int q;
  cin >> q;
  int ans =0;
  while(q--)
  {
    int s, e;
    cin >> s >> e;
      int sum =0;
    for(int i = s; i<=e; i++)
    { 
      sum += arr[i];
    }
    cout<<sum<<endl;
  }
  return ;
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

  querysubarray(arr , n);
}





Input:
10
10 20 30 40 50 60 89 67 46 100
query ->10
s , e->1 3
a-90
1 10
a-554091794
0 9
a-512
7 9 
a-213
6 9
a-302
1 6
a-289
1 8
a-402
2 3
a-70
5 7
a-216
8 9
a-146
