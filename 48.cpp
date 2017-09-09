#include<iostream>
using namespace std;
int  main()
{
	int n, i, j, count=0;
        cout<<"Enter the value of n : ";   
     	cin>>n;
	cout<<"Prime Numbers  Between one and "<<n<<" are :\n";
	for(i=1; i<=n; i++)						
{	count=0;									for(j=2; j<i; j++)
{
	if(i%j==0) 								{    	count++;   									break;}}				
	if(count==0)			
	{cout<<i<<" ";}
 	return 0;
}														}
