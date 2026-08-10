c++

#include<bits/stdc++.h>
using namespace std;


int main()
{

  int n;
  cin >> n;

  int arr[n];

  int  count=0;
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }

  int target ;
  cin>>target;
  for(int i=0; i<n; i++)
  {  
    for(int j=i+1 ; j<n; j++)
    {
      if(arr[i]+arr[j]==target && arr[i]!= arr[j])
      {
        count++;
      }
    }
    
  }

  cout<<count;
}

Java

import java.util.Scanner;

class Main
{

     
    public static void main(String[] args)
    {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int []arr = new int[n];
        int target = sc.nextInt();

        int count = 0;
        for(int i=0;  i<n; i++)
        {
            arr[i] = sc.nextInt();
        }
    
        for(int i=0; i<n; i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==target  && arr[i] != arr[j])
                {  
                     //ystem.out.println(arr[i]+ " "+arr[j]);
                    count++;
                }
            }
        }
        System.out.print(count);
        
    }
}
