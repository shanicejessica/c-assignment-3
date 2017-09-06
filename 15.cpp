#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter side 1"<<endl<<"enter side 2"<<endl<<"enter side 3";
cin>>a>>b>>c;
if((a+b>c)&&(c+b>a)&&(c+a>b))
{
cout<<"the triangle is valid";
}
else 
{cout<<"the triangle is not possible";
}
return 0;
}


