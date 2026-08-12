Print the start and end index of all the subarrays length K

C++

#include<bits/stdc++.h>
using namespace std;
void subarray(int arr[] , int k , int n)
{ int s =0, e=0;
  for(int i=0; i<=n-k; i++)
  {
    s=i;
    e=k+i-1;
    cout<<s<<" "<<e<<endl;
  }
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
  
  subarray(arr, k,n);

 
}


Java 


import java.util.Scanner;

class Main
{

    static void Indexsubarray(int [] arr , int n, int k)
    {
            int start=0,end=0;
        for(int i=0; i<n-k; i++)
        {
            start =i;
            end = i+k-1;

            System.out.println(start+"  "+end);
        }
        
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

        Indexsubarray(arr, n,k);
    
        
    }
}



Input:

6
1 2 3 4 5 6
3

Output:
0  2
1  3
2  4
