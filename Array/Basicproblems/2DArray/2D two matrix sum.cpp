
Given 2d two matric return the sum of the arrya 

Input:
3 4
1 2 3 4 5 6 7 8 9 10 11 12
12 11 10 9 8 7 6 5 4 3 2 1

Output:
13 13 13 13 
13 13 13 13 
13 13 13 13 


#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int arr[n][m] , brr[n][m];

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      cin >> arr[i][j];
    }
  }

   for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      cin >> brr[i][j];
    }
  }

  int sum[n][m];

  for(int i=0; i<n; i++)
  {  int  count =0;
    for(int j=0; j<m; j++)
    {   
       count = arr[i][j]+brr[i][j];

       sum[i][j]=count;
    }
  }


  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      cout<<sum[i][j]<<" ";
    }

    cout<<endl;
  }
}
