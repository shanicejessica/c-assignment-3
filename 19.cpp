#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e,f;
cout<<"enter marks of physics"<<endl;
cout<<"enter marks of computer"<<endl<<"enter marks of mathematics"<<endl<<"enter marks of biology"<<endl<<"enter marks of chemistry"<<endl;
cin>>a>>b>>c>>d>>e;
f=(a+b+c+d+e)/5;
cout<<"percentage="<<f;
if (f>=90)
{cout<<"grade A";}
else if (f>=80)
{cout<<"grade B";}
else if (f>=70)
{cout<<"grade C";}
else if (f>=60)
{cout<<"grade D";}
else if (f>=40)
{cout<<"grade E";}
else 
{cout<<" grade F";}
return 0;
}
