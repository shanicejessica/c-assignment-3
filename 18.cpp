#include<iostream>
using namespace std;
int main()
{
float a,b,c;
cout<<"enter cost price"<<endl<<"enter selling price"<<endl;
cin>>a>>b;
c=a-b;
if (c>0)
{cout<<"profit="<<c;}
else if (c<0)
{cout<<"loss="<<c;}
else
cout<<"no profit or loss";
return 0;
}
