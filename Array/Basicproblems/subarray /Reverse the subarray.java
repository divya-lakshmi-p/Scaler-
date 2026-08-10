Reverse the subarray , given the start and end index


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
        int s = sc.nextInt();
        int e = sc.nextInt();
    
        int left = s;
        int right = e;

        while(left<right)
        {   int temp = arr[left];
            arr[left]=arr[right];
            arr[right]  = temp;
           // swap(arr[left] , arr[right]);
            left++;
            right--;
        }
        
        for(int x:arr)
        {
            System.out.print(x+" ");
        }
        
    }
}

Input:
10
1 7 8 4 7 3 9 6 10 18
3 8
Output:
1 7 8 10 6 9 3 7 4 18
