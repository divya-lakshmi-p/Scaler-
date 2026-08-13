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

  o(n^2)






o(n) approach 
  
import java.util.Scanner;

class Main
{

    static int Indexsubarray(int [] arr , int n, int k)
    {
        int sum =0;
        //calculate the sum of the k length array 
        for(int i=0; i<k; i++)
        {
            sum +=arr[i];
        }
        int maxi = sum ;
        /*resuse the sum here arr[i-1] means previous value we are reducing it and next value we are adding it which is the last value 
        for example if array is 1 2 3 4 5 means k length is 2 then first for loop will ad 1 and 2 then in the second for loop the loop itself starts from 1st index then  its use the sum and then subtract the previous index value and addding the kth index value */
        
        for(int i=1; i<=n-k; i++)
        {
            sum  = sum -arr[i-1]+arr[i+k-1];
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


/*In this approach what we are doing is instead of calculation sum each time from starting , we try to reduce the calculation time ,

so in first for loop we just find the first sum of k length array and then in the second loop we just use the sum and then subtract the previous value which is previous index and addd the last index value which is k length */


