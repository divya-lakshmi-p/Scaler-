Find the max subarray sum of length K

c++
#include<bits/stdc++.h>
using namespace std;
int subarray(int arr[] , int k , int n)
{ int s =0, e=0;
  int maxi = INT_MIN;
  for(int i=0; i<=n-k; i++)
  {
    s=i;
    e=k+i-1;
    int sum =0;
    
    for(int start = s; start <=e; start++)
    {
       sum+=arr[start];
    }
    maxi = max(maxi,sum);
  }
    return maxi;
}

int main()
{
  int n;
  cin>> n;

  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  int k;
  cin>>k;
  
  cout<<subarray(arr, k,n);

 
}



Java 



  
import java.util.Scanner;

class Main
{

    static int Indexsubarray(int [] arr , int n, int k)
    {
            int start=0,end=0;
            int maxi = Integer.MIN_VALUE;
        for(int i=0; i<=n-k; i++)
        {
            start =i;
            end = i+k-1;
              int sum =0;
           for( start = i; start <=end; start++)
           {
                sum +=arr[start];
           }

           maxi = java.lang.Math.max(maxi, sum);
        }

        return maxi;
        
    }
     public static void main(String[] args)
    {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int []arr = new int[n];

        for(int i=0;  i<n; i++)
        {
            arr[i] = sc.nextInt();
        }
    
        int k= sc.nextInt();

        System.out.println(Indexsubarray(arr, n,k));
    
        
    }
}



Input:
6
1 2 3 6 5 1
2

Output:
11
