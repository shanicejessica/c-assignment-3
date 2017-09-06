#include<iostream>
using namespace std;
int main()
{
char v;
cout<<"enter a character";
cin>>v;
if(v>='A' && v<='Z')
{
cout<<v<<"is an upper case alphabet";
}
else if(v>='a' && v<='z')
{cout<<v<<"is a lower case alphabet";
}
return 0;
}

