Find the single number 

import java.util.Scanner;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int arr[] = new int[n];
        int find =0;

        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();

            find ^= arr[i];

        }

        System.out.println(find);
    }

}

Input:
5
1 1 4 5 5
Output:
4
