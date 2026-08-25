Given a string which contains lower case alphabet, return the no of pairs (i,j) such that i<j ,  s[i] = 'a', s[j] = 'g'



optimised approach 


#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int countA=0, pairs =0;

  for(int i=0; i<s.size(); i++)
  {
    if(s[i] == 'a')
    {
      countA++;
    }

    else if(s[i] == 'g')
    {
      pairs += countA;
    }
  }

  cout<<pairs<<endl;
}



Input:
agagagaga

Output:
10

/*Brute Force approach


#include<bits/stdc++.h>
using namespace std;

int main()
{
  string n;
  cin >> n;
 int count =0;
  
  for(int i=0; i<n.size(); i++)
  {  if(n[i]=='a')
    {
      for(int j=i+1; j<n.size(); j++)
    {
        if(n[j]=='g')
        {
          count++;
        }
    }
    }
    
  }
cout<<count<<endl;

}*/


agagagaga
10
kamal
