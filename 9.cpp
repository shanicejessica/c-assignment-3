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
else if(v>='0' && v<='9')
{cout<<v<<"is a digit";
}
else
{cout<<v<<"is a special character";}
return 0;
}



