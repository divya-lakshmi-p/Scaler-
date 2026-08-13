Given an array , return the all possible sum of subbarrays (accumulative sum)

import java.util.Scanner;

class Main
{

    static void  Indexsubarray(int [] arr , int n )
    {
        int start =0 , end=0 , sum=0;
        
        for(int i=0; i<n; i++)
        {   //start choices which is left boundary how many elements present before the index   
            start = i+1;
            //end choices which is right boundary how many elements present after then index 
            end = n-i;

            sum += arr[i] * start * end;
        }
        System.out.println(sum);
       
         
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
    
        Indexsubarray(arr, n);
    
        
    }
}

Input:
5
1 2 3 4 5

Output:
105





