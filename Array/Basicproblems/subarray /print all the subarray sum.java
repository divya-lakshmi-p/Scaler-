Java 

  import java.util.Scanner;

class Main
{
     public static void main(String[] args)
    {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int []arr = new int[n];

        for(int i=0;  i<n; i++)
        {
            arr[i] = sc.nextInt();
        }
    
        for(int i=0; i<n; i++)
        {
            for(int j=i;j<n;j++)
            {   int count =0;
                for(int k=i; k<=j; k++)
                {
                     count+=arr[k];
                }

                System.out.print(count);
            }
        }
        
        
    }
}

C++
  
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>> n;

  int sum =0;
  int arr[n];

  for(int i =0; i<n; i++)
  {
    cin>>arr[i];
  }

  for(int i=0; i<n; i++)
  {
    for(int j=i; j<n; j++)
    {   int sum =0;
      for( int k=i; k<=j;k++)
      {
        sum+=arr[k];

      }
      cout<<sum<<" ";
    }
  }
}


Input:
3
3 1 2
output:
3 4 6 1 3 2
