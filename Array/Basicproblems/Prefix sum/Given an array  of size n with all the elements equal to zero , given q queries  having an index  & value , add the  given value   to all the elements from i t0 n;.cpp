Given an array  of size n with all the elements equal to zero , given q queries  having an index  & value , add the  given value   to all the elements from i t0 n;



#include<bits/stdc++.h>
using namespace std;

int querychange(int arr[] , int n)
{
  int query;
  cin >> query;

  while(query--)
  {
    int index , value;
    cin >> index >> value;
    int sum =0;
    for(int i=index; i<n; i++)
    {
      sum = arr[i]+value;
      arr[i] = sum;

    }
  }
  return 0;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n;  i++)
  {
    cin >> arr[i];
  }

  querychange(arr, n);

  for(int x:arr)
  {
    cout<<x<<" ";
  }
  cout<<endl;
}



Optimized one 
This one is awesomw instead of iterating all the number everytime just add the  value in that particular index and once done with the query do the prefix sum with the array that it  


#include<bits/stdc++.h>
using namespace std;

int querychange(int arr[] , int n)
{
  int query;
  cin >> query;

  while(query--)
  {
    int index , value;
    cin >> index >> value;
    arr[index] = arr[index]+value;
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
  int arr[n] = {0};
  querychange(arr, n);
  
  for(int i=0;i<n;  i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


Input:
5
query
3 
index value 
1 10
2 5
4 2
Output:
0 10 15 15 17































prefix sum basic

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
