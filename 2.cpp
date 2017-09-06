#include<iostream>
using namespace std;
int main()
{
int a,b,c,big;
cout<<"first no="<<endl<<"second no="<<endl<<"third no =";
cin>>a>>b>>c;
if(a>b)
{
big=a;
}
else if(b>c)
{big=b;}
else
{ big=c;
}
cout<<"maxima of three numbers is"<<big;
return 0;
}

