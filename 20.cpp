#include<iostream>
using namespace std;
int main()
{
float a,b,c,d,e,f;
cout<<"enter basic salary of employee"<<endl;
cin>>a;
if (a<=10000)
{b=.2*a;
c=.8*a;}
else if (a<=20000)
{b=.25*a;
c=.9*a;}
else if (a>=20000)
{b=.3*a;
c=.95*a;}
d=a+b+c;
{cout<<" gross salary="<<d;}
return 0;
}

