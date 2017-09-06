#include<iostream>
using namespace std;
int main()
{
int v;
cout<<"enter month no";
cin>>v;
if((v==1)||(v==3)||(v==5)||(v==7)||(v==8)||(v==10)||(v==12))
{cout<<"no of days=31";}
else if((v==4)||(v==6)||(v==9)||(v==10)||(v==11))
{cout<<"no of days = 30";}
else if(v==2)
{cout<<"no of days=28";}
else
{cout<<v<<"invalid input";}
return 0;
}

