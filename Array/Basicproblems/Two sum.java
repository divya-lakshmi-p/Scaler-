Problem Description

Given an array A and an integer B. A pair(i, j) in the array is a good pair if i != j and (A[i] + A[j] == B). Check if any good pair exist or not.



Problem Constraints

1 <= A.size() <= 104

1 <= A[i] <= 109

1 <= B <= 109



Input Format

First argument is an integer array A.

Second argument is an integer B.



Output Format

Return 1 if good pair exist otherwise return 0.



Example Input

Input 1:

A = [1,2,3,4]
B = 7
Input 2:

A = [1,2,4]
B = 4
Input 3:

A = [1,2,2]
B = 4


Example Output

Output 1:

1
Output 2:

0
Output 3:

1




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
