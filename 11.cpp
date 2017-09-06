#include<iostream>
using namespace std;
int main()
{
int v;
cout<<"enter week day no";
cin>>v;
if(v==2)
{cout<<v<<"monday";}
else if(v==3)
{cout<<v<<"tuesday";}
else if(v==4)
{cout<<v<<"wednesday";}
else if(v==5)
{cout<<v<<"thursday";}
else if(v==6)
{cout<<v<<"friday";}
else if(v==7)
{cout<<v<<"saturday";}
else if(v==1)
{cout<<v<<"sunday";}
else 
{cout<<v<<"invalid input";}
return 0;
}


