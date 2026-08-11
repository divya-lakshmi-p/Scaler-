Problem Description

Given an array of integers A and multiple values in B, which represents the number of times array A needs to be left rotated.

Find the rotated array for each value and return the result in the from of a matrix where ith row represents the rotated array for the ith value in B.



Problem Constraints

1 <= length of both arrays <= 2000 -10^9 <= A[i] <= 10^9 0 <= B[i] <= 2000


Input Format

The first argument given is the integer array A.
The second argument given is the integer array B.


Output Format

Return the resultant matrix.


Example Input

Input 1:
 
    A = [1, 2, 3, 4, 5]
    B = [2, 3]

Input 2:

  
    A = [5, 17, 100, 11]
    B = [1]




Example Output

Output 1:
 
    [ [3, 4, 5, 1, 2]
     [4, 5, 1, 2, 3] ]


Output 2:

    
    [ [17, 100, 11, 5] ]



Example Explanation

for input 1 -> B[0] = 2 which requires 2 times left rotations

1: [2, 3, 4, 5, 1]

2: [3, 4, 5, 1, 2]

B[1] = 3 which requires 3 times left rotation

1: [2, 3, 4, 5, 1]

2: [3, 4, 5, 1, 2]

2: [4, 5, 1, 2, 4]








#include<bits/stdc++.h>
using namespace std;

void reversearray(int a[] , int left , int right)
{
  while(left<right)
  {swap(a[left] , a[right]);
  left++;
  right--;}
  

}

void rotatearray(int a[] , int b[] , int n , int m, vector<vector<int>>&ans)
{ 
    
     for(int i=0; i< m; i++)
     {
         int temp[n];
         for(int j=0;j<n;  j++)
         {
             temp[j] = a[j];
         }
        int d = b[i]%n;
        reversearray(temp, 0 , d-1);
        reversearray(temp , d , n-1);
        reversearray(temp,0,n-1);

        vector<int>row;

        for(int j=0;j<n; j++)
        {
          row.push_back(temp[j]);
        }


        ans.push_back(row);

     }
}

int main()
{
  int n,m;
  cin>> n>>m;
   
  int a[n] ,b[m];
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }

  for(int j=0; j<m; j++)
  {
    cin>>b[j];
  }

  vector<vector<int>>ans;
  rotatearray(a ,b,n,m,ans);

 for(int i=0; i<ans.size();i++)
 {
  for(int j=0; j<ans[i].size();j++)
  {
    cout<<ans[i][j]<<"  ";
  }

  cout<<endl;
 }

}






Scaaler 

void reversearray(vector<int>& A, int left , int right)
{
  while(left<right)
  {
    swap(A[left] , A[right]);
    left++;
    right--;
  }
  

}


void rotatearray(vector<int>& A, vector<int>& B , int n , int m, vector<vector<int>>&ans)
{ 
    
     for(int i=0; i< m; i++)
     {
          vector<int> temp(n);
         for(int j=0;j<n;  j++)
         {
             temp[j] = A[j];
         }
        int d = B[i]%n;
        reversearray(temp, 0 , d-1);
        reversearray(temp , d , n-1);
        reversearray(temp,0,n-1);

        vector<int>row;

        for(int j=0;j<n; j++)
        {
          row.push_back(temp[j]);
        }


        ans.push_back(row);

     }
}





vector<vector<int> > Solution::solve(vector<int> &A, vector<int> &B) {

    int n = A.size() , m = B.size();


    vector<vector<int>>ans;
 
 rotatearray(A,B,n,m,ans);

 return ans;

}

