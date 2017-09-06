#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter a no";
cin>>a;
if(a%5==0)
{
cout<<a<<"is divisible by five";
}
else if(a%11==0)
{cout<<a<<"is divisible by eleven";}
else
{cout<<a<<"is not divisible by five or eleven";
}
return 0;
}


