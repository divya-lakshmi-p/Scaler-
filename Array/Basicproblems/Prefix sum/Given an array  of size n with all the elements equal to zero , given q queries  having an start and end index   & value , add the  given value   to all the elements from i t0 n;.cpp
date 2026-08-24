
Given an array  of size n with all the elements equal to zero , given q queries  having an start and end index   & value , add the  given value   to all the elements from i t0 n;



#include<bits/stdc++.h>
using namespace std;

int querychange(int arr[] , int n)
{
  int query;
  cin >> query;

  while(query--)
  {
    int start , end ,  value;
    cin >> start >> end  >> value;
    for(int i= start; i<=end; i++)
    {
       arr[i] = arr[i]+value;
    }
  }

  
  return 0;
}

int main()
{
  int n;
  cin >> n;
  int arr[n] = {0};
  querychange(arr, n);
  
  for(int i=0;i<n;  i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


its awesome actually instead of just adding start and end value we are adding start and subtracting end+1 value why is we have to add the value from start to end not till the end of the array so when end idex we reached
after the end index value we are subtracting it 




#include<bits/stdc++.h>
using namespace std;

int querychange(int arr[] , int n)
{
  int query;
  cin >> query;

  while(query--)
  {
    int start,end , value;
    cin >> start >> end >> value;
    arr[start] = arr[start]+value;
    arr[end +1] = arr[end+1] - value;
  }

  for(int i=1; i<n; i++)
  {
    arr[i] = arr[i-1]+arr[i];
  }
  return 0;
}

int main()
{
  int n;
  cin >> n;
  int arr[n+1] = {0};
  querychange(arr, n);
  
  for(int i=0;i<n;  i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}







































/*#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];
  vector<int>v(n);
  for(int i=0; i<n; i++)
  { 
    cin >> arr[i];

    v[i] = v[i-1]+arr[i];

  }

  for(int x: v)
  {
    cout<<x<<" ";
  }
}*/




























/*#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];
  vector<int>v(n);
  for(int i=0; i<n; i++)
  { 
    cin >> arr[i];

    v[i] = v[i-1]+arr[i];

  }

  for(int x: v)
  {
    cout<<x<<" ";
  }
}*/
