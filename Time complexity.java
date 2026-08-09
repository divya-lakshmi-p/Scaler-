Q2. Time-Complexity-2
Solved
What is the time complexity of the following code :

C++
Python
void solve(int n){
    for(int i = 0; i < n; i++){
        for(int j=0; j < i / 2; j++){
            // O(1) operation
        }
    }
}

ANs:O(N*N)


Q3.void solve(int n) {
    int k = 0;

    for (int i = n / 2; i <= n; i++) {
        int j = 2;

        while (j <= n) {
            k = k + n / 2;
            j = j * 2;
        }
    }
}
ANs:o(nlogn)


Q4. Time-Complexity-5
Solved
feature icon
Using hints except Complete Solution is Penalty free now
Use Hint
What is the time complexity of the following code :

int a =0 , i= N;
while(i>0)
{
a+= i;
i /=2;

}

ANs:o(log n)


Q5. Time-Complexity-6
Solved
The complexity of Binary search algorithm is

o(log n)



Q6. Identifying O(1) Complexity
Solved
feature icon
Using hints except Complete Solution is Penalty free now
Use Hint
If an algorithm has a time complexity of O(1), then the complexity of it is ?


ANs:constant



Q1. AMORTIZED2
Solved
What is the time complexity of the following code :

        int j = 0;
        for(i = 0; i < n; ++i) {
            while(j < n && arr[i] < arr[j]) {
                j++;
            }
        }
        
        
        ANs:o(n)
        
 

Q2.Time-Complexity-22
Solved
feature icon
Using hints except Complete Solution is Penalty free now
Use Hint
What is the time complexity of following code:
int i, j, k = 0;
for (i = n / 2; i <= n; i++) 
{
    for (j = 2; j <= n; j = j * 2) 
    {
        k = k + n / 2;
    }
}

Ans:o(n log n)



Q3 .public void solve(int n)
{
 int i= n;
 while(i>0)
 {
   if(i%2==0)
   {
   for(int j=1;j<=n*n; j+=2)
   {
   }
   }
   i /=2;
   }
   }

Ans:o(n^2 logn)



Q4. public void solve(){
int i=1;
while(i<n)
{
int x=i;
while(x-- >0)
{
}
i++;
}
}


ANs:o(n^2)


Q5.public static void f(int N, int M, int K) {

    int[][][] a = new int[N + 1][M + 1][K + 1];

    int sum = 0;

    for (int i = 1; i <= N; i++) {

        for (int j = i; j <= M; j++) {

            for (int k = j; k <= K; k++) {

                sum += a[i][j][k];
            }
        }
    }

    System.out.println(sum);
}



Ans:o(n*m*k)
