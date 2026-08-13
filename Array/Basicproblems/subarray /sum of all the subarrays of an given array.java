Print the sum of all the subarrays in the given array 

  
import java.util.Scanner;

class Main
{

    static void  Indexsubarray(int [] arr , int n )
    {
        int sum =0;
        
        for(int i=0; i<n; i++)
        {     sum=0;
            for(int j=i; j<n; j++)
        {
                sum += arr[j];

                System.out.print(sum+" ");
           
        }
        System.out.println();
        
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
    
        Indexsubarray(arr, n);
    
        
    }
}

INput:
5
1 2 3 4 5

Output:
1 3 6 10 15 
2 5 9 14 
3 7 12 
4 9 
5 

  Tc:o(n^2)













