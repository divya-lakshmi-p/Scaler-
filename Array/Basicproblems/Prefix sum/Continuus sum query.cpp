Problem Description

There are A beggars sitting in a row outside a temple. Each beggar initially has an empty pot. When the devotees come to the temple, they donate some amount of coins to these beggars. Each devotee gives a fixed amount of coin(according to their faith and ability) to some K beggars sitting next to each other.

Given the amount P donated by each devotee to the beggars ranging from L to R index, where 1 <= L <= R <= A, find out the final amount of money in each beggar's pot at the end of the day, provided they don't fill their pots by any other means.
For ith devotee B[i][0] = L, B[i][1] = R, B[i][2] = P, given by the 2D array B


Problem Constraints

1 <= A <= 2 * 105
1 <= L <= R <= A
1 <= P <= 103
0 <= len(B) <= 105


Input Format

The first argument is a single integer A.
The second argument is a 2D integer array B.


Output Format

Return an array(0 based indexing) that stores the total number of coins in each beggars pot.


Example Input

Input 1:-
A = 5
B = [[1, 2, 10], [2, 3, 20], [2, 5, 25]]


Example Output

Output 1:-
10 55 45 25 25


Example Explanation

Explanation 1:-
First devotee donated 10 coins to beggars ranging from 1 to 2. Final amount in each beggars pot after first devotee: [10, 10, 0, 0, 0]
Second devotee donated 20 coins to beggars ranging from 2 to 3. Final amount in each beggars pot after second devotee: [10, 30, 20, 0, 0]
Third devotee donated 25 coins to beggars ranging from 2 to 5. Final amount in each beggars pot after third devotee: [10, 55, 45, 25, 25]

One sentence you should remember

ans[left] += p starts the contribution, ans[right+1] -= p ends the contribution, and prefix sum spreads those contributions across the range.

That's the Difference Array + Prefix Sum pattern. Once this clicks, a whole class of range-update problems becomes much easier.










he visual way to understand it

Think of each query as a range of water.

For:

[1, 2, 10]

we mark:

        START       STOP
          ↓           ↓
index:   0    1    2    3    4
        +10        -10

Prefix sum makes the +10 flow:

10 → 10 → 0

So:

10  10  0

For:

[2, 3, 20]

we mark:

index:   0    1    2    3    4
              +20       -20

For:

[2, 5, 25]

we mark:

index:   0    1    2    3    4    5
              +25                 -25

All three markers combine:

index:   0    1    2     3    4     5
        --------------------------------
        10   45   -10   -20    0    -25

Then prefix sum:

10
10 + 45              = 55
55 - 10              = 45
45 - 20              = 25
25 + 0               = 25
25 - 25              = 0

Therefore:

10  55  45  25  25  0
                         ↑
                    extra position

Remove the extra position:

10 55 45 25 25



#include<bits/stdc++.h>
using namespace std;

void beggar( int n)
{
  int q;
  cin >> q;

  vector<int>ans(n+1);//why i am creating vector with size n+ means we are going to do it for n+1 values its like from 0th index 

  for(int i=0; i<q; i++)
  {
    int left , right , value;
    cin >> left >> right >> value;
    left = left-1;    // it will update the value in i-1 positon like if its starts from 1 then it will update in 0th value 
     
    ans[left] += value;
    ans[right] -= value;
  }

  for(int i=1; i<ans.size(); i++)
  {
    ans[i] = ans[i-1]+ans[i];
  }

  ans.pop_back();

  for(auto x: ans)
  {
    cout << x<< " ";
  }


  cout<<endl;
}

int main()
{
  int n;
  cin >> n;

  beggar( n);
}



//core logic is like instead of updating the value in each index just updare left and right value then we can do prefix sum , but here main thigns is for left we have to add the psotive value and for right if the ending index is 3 we have to update in 4 th index with negative value to remove it .





vector<int> Solution::solve(int A, vector<vector<int> > &B) {

vector<int> ans(A + 1, 0);
    for(int i=0; i<B.size(); i++)
    {
        int left = B[i][0]-1;
        int right = B[i][1]-1;
        int p = B[i][2];

        ans[left] = ans[left]+p;
        ans[right+1] = ans[right+1] -p;
     }
     for(int i=1; i<A; i++)
    {
        ans[i] = ans[i-1]+ans[i];
    }
    ans.pop_back();
    return ans;
}
