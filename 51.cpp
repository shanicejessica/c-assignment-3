#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  int  n, digit, sum = 0,i;
  cout << "Enter a positive  integer: ";
  cin >> n;
  i=1;
 
  while(i != 0)
  { digit=n%10;
      n=n/10;
      i++;
      sum+=pow(digit,i);
       
      
  }

  if(sum==n)
    cout <<n << " is an Armstrong number.";
  else
    cout << n << " is not an Armstrong number.";

  return 0;
}
