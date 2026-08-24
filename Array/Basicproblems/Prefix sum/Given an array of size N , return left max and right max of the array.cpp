Given an array of size N , return left max and right max of the array

Optimised one 

#include<bits/stdc++.h>
using namespace std;
void sumax(int arr[] , vector<int>&left , vector<int>&right , int n)
{
   left[0] = arr[0] ;
    for(int j=1; j<n; j++)
    {  
      left[j] = max(left[j-1] , arr[j]); 
    }
    
    right[n-1]=arr[n-1];
    for(int k =n-2; k>=0;  k--)
    { 
      right[k] = max(right[k+1], arr[k]);
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
  vector<int>left(n) , right(n);

  sumax(arr,left, right, n);

  cout<<"LeftArray: ";
  for(int i=0; i<n; i++)
  { 
    cout<< left[i]<<" ";
  }
  cout<<endl;

  cout<<"RightArray: ";
  for(int R: right)
  {
    cout<<R<<" ";
  }
  cout<<endl;
}




Brute force 
#include<bits/stdc++.h>
using namespace std;
void sumax(int arr[] , vector<int>&left , vector<int>&right , int n)
{
  int count = arr[0],j;
  for(int i=0; i<n; i++)
  {   int maxi = arr[0]; 
    for(j=0; j<=i; j++)
    {  
      maxi = max(maxi , arr[j]); 
    }
   left[i] = maxi;
    
    count =0;
    for(int k =i; k<n;  k++)
    { 
      count = max(count , arr[k]);
    }
    right[i] = count;
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
  vector<int>left(n) , right(n);

  sumax(arr,left, right, n);

  cout<<"LeftArray: ";
  for(int i=0; i<n; i++)
  { 
    cout<< left[i]<<" ";
  }
  cout<<endl;

  cout<<"RightArray: ";
  for(int R: right)
  {
    cout<<R<<" ";
  }
  cout<<endl;
}


INput:
10
-3 6 2 4 5 2 8 -9 3 1

Output:
LeftArray: -3 6 6 6 6 6 8 8 8 8 
RightArray: 8 8 8 8 8 8 8 3 3 1 
