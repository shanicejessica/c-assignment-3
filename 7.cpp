#include<iostream>
using namespace std;
int main()
{
char v;
cout<<"enter a character";
cin>>v;
if((v>='a' && v<='z')||(v>='A' && v<='Z'))
{
cout<<v<<"is an alphabet";
}
else
{cout<<v<<"is not an alphabet";
}
return 0;
}

