/*
  count number of 1s in binary representation of an integer
  
  Sample Input
  1)5
  2)4
  3)15
  
  Sample Output
  1)2
  2)1
  3)4
  
  N.B: this problem is a practice problem from an online course
*/

#include<iostream>
using namespace std;

void print(int n)
{
   
    //  int count = 0;
    //   while( n > 0)
    //     {
    //       if(n%2==1) count++;
           
    //       n = n/2;
    //     }
    //     cout<<count;
    int count = 0;
       while( n > 0)
        {
           if(n&1) count++;
           
           n = n/2;
        }
        cout<<count;
}
int main() 
{
  int n;
  cin>>n;
  print(n);
  return 0; 
}
