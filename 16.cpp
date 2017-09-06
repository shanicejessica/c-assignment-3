#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"first side="<<endl<<"second side="<<endl<<"third side=";
cin>>a>>b>>c;
if ((a==b)&&(b==c))
{cout<<"the triangle is equilateral.";}
else if ((a==b)||(b==c)||(a==c))
{cout<<"the triangle is isosceles";}
else
cout<<"the triangle is scalene";
return 0;
}
