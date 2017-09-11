#include<iostream>
using namespace std;
int main()
{int n;
cout<<"enter the value of n";
cin>>n;
cout<<"strong nos between one to "<<n<<" are";
for(int i=1;i<=n;++i)
{int k=i,sum=0;
while(k>0)
{ int r;
 r=k%10;
 sum=sum+r*r*r;
 k=k/10;

}

if(i==sum)
cout<<i<<" ";}
return 0;
}
