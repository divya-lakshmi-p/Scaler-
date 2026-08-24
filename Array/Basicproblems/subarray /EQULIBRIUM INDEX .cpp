#include<bits/stdc++.h>
using namespace std;
void  equli(int arr[] , int n)
{
  for(int i=0; i<n; i++)
{
    int leftsum = 0;
    int rightsum = 0;

    for(int j=0; j<i; j++)
    {
        leftsum += arr[j];
    }

    cout << "leftsum = " << leftsum << endl;

    for(int k=i+1; k<n; k++)
    {
        rightsum += arr[k];
    }

    cout << "rightsum = " << rightsum << endl;

    cout << "----------------" << endl;

    if(leftsum == rightsum)
    {
      cout<<i<<endl;
      break;
    }
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
  equli(arr , n);
}
